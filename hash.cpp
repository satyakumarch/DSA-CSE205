#include <iostream>
using namespace std;

const int tableSize = 100;

class HashTable {
public:
    struct KeyValue {
        int key;
        int value;
    };
    KeyValue table[tableSize];

    HashTable() {
        for (int i=0; i<tableSize; i++) {
            table[i].key = -1;
        }
    }

    int hash(int key) {
        return key % tableSize;
    }

    void insert(int key, int value) {
        int index = hash(key);
        int initialIndex = index;
        int count = 0;
        do {
            if (table[index].key == -1) {
                table[index].key = key;
                table[index].value = value;
                return;
            }
            index = (index + 1) % tableSize;
            count++;
            if (count >= tableSize) {
                cout<<"Hash table is full. Unable to insert key "
                <<key<< " with value "<<value<<endl;
                return;
            }
        } while(index != initialIndex);
    }

    int search(int key) {
        int index = hash(key);
        if (table[index].key == key) {
            return index;
        } else {
            int newIndex = (index + 1) % tableSize;
            while (table[newIndex].key != key && newIndex != index) {
                newIndex = (newIndex + 1) % tableSize;
            }
            if (table[newIndex].key == key) {
                return newIndex;
            }
        }
        return -1;
    }

    void display() {
        for (int i=0; i<tableSize; i++) {
            if (table[i].key != -1) {
                cout<<"table["<<i<<"]: Key="<<table[i].key
                <<", Value="<<table[i].value<<endl;
            }
        }
    }
};

int main() {
    HashTable hashTable;
    hashTable.insert(223, 10);
    hashTable.insert(199, 20);
    hashTable.insert(323, 30);
    hashTable.insert(299, 40);

    cout<<"Hash table after inserting key-value pairs:"<<endl;
    hashTable.display();
    int keyToSearch;
    cout<<"Enter the key to search: ";
    cin>>keyToSearch;
    int result = hashTable.search(keyToSearch);
    if (result != -1) {
        cout<<"Key "<<keyToSearch<<" found at index "<<result
        <<". Value: "<<hashTable.table[result].value<<endl;
    } else {
        cout<<"Key "<<keyToSearch<<" not found in the hash table"<<endl;
    }
    return 0;
}
//output
//Hash table after inserting key-value pairs:
//table[0]: Key=299, Value=40
//table[23]: Key=223, Value=10
//table[24]: Key=323, Value=30
//table[99]: Key=199, Value=20
//Enter the key to search: 223
//Key 223 found at index 23. Value: 10
