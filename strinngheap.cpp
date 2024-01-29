#include <iostream> 
#include <string> 
using namespace std; 
 
const int tableSize = 10; 
 
class HashTable { 
public: 
    struct KeyValue { 
        string key; 
        int value; 
    }; 
    KeyValue table[tableSize]; 
    HashTable() { 
        for (int i=0; i<tableSize; i++) { 
            table[i].key = ""; 
        } 
    } 
 
    int hash(const string& key) { 
        int sum = 0; 
        /*for (char c : key) { 
            sum += static_cast<int>(c); 
        }*/ 
        for(int i=0; i<key.length(); i++){ 
            sum += static_cast<int>(key.at(i)); 
        } 
        return sum % tableSize; 
    } 
 
    void insert(const string& key, int value) { 
        int index = hash(key); 
        int initialIndex = index; 
        int count = 0; 
        do { 
            if (table[index].key.empty()) { 
                table[index].key = key; 
                table[index].value = value; 
                return; 
            } 
            index = (index + 1) % tableSize; 
            count++; 
            if (count >= tableSize) { 
                cout<<"Hash table is full. Unable to insert key " 
                <<key<<" with value "<<value<<endl; 
                return; 
            } 
        } while(index != initialIndex); 
    } 
 
    int search(const string& key) { 
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
            if (!table[i].key.empty()) { 
                cout<<"table["<<i<<"]: Key="<<table[i].key 
                <<", Value="<<table[i].value<<endl; 
            } 
        } 
    } 
}; 
 
int main() { 
    HashTable hashTable; 
    hashTable.insert("apple", 100); 
    hashTable.insert("banana", 200); 
    hashTable.insert("orange", 300); 
    hashTable.insert("grape", 400); 
    cout<<"Hash table after inserting key-value pairs:"<<endl; 
    hashTable.display(); 
    string keyToSearch; 
    cout<<"Enter key to search: "; 
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
output
Hash table after inserting key-value pairs:
table[0]: Key=apple, Value=100
table[6]: Key=orange, Value=300
table[7]: Key=grape, Value=400
table[9]: Key=banana, Value=200
Enter key to search: banana
Key banana found at index 9. Value: 200
