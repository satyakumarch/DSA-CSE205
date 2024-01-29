//Problem Statement
//
//
//
//You are working on a text processing system that analyzes the frequency of characters in a given string. 
//
//
//
//As part of the system, you need to identify the index of the first unique character in the string using a queue implemented using an array. To accomplish this, you implement a function that takes a string as input and returns the index of the first unique character.
//
//
//
//The system follows these requirements:
//
//Initialize Queue: The system initializes a custom queue, implemented using an array, to an empty state.
//Enqueue Characters: The system enqueues the characters from the input string into the queue.
//Count Character Occurrences: While enqueuing, the system keeps track of the number of occurrences of each character.
//Find First Unique Character: After enqueuing all characters, the system dequeues characters from the queue and checks their occurrence count. It identifies the index of the first character with a count of 1, indicating a unique character.
//Return Result: The system returns the index of the first unique character, or -1 if no unique character is found.
//
//
//Note: This is a sample question asked in a Capgemini interview.
//
//Input format :
//The input consists of a single line containing a string of lowercase alphabets.
//
//Output format :
//The output displays the index of the first unique character in the string (index starts from 0).
//
//If no unique character is found, the output is -1.
//
//
//
//Refer to the sample output for the exact text and format.
//
//Code constraints :
//The length of the input string is at most 100.
//
//The input string consists of only lowercase alphabets.
//
//Sample test cases :
//Input 1 :
//aabbcdeeff
//Output 1 :
//4
//Input 2 :
//aabb
//Output 2 :
//-1

#include <iostream>
#include <vector>

using namespace std;

const int MAX_CHAR = 26;

int findFirstUniqueCharacterIndex(const string& str) {
    vector<int> charCount(MAX_CHAR, 0); // Initialize character count array
    vector<int> queue; // Initialize queue to store indices
    
    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];
        charCount[ch - 'a']++; // Count occurrences of each character
        queue.push_back(ch - 'a'); // Store character index in the queue
    }
    
    for (int i = 0; i < queue.size(); i++) {
        if (charCount[queue[i]] == 1) {
            return i; // First unique character found
        }
    }
    
    return -1; // No unique character found
}

int main() {
    string str;
    cin >> str;
    
    int result = findFirstUniqueCharacterIndex(str);
    
    cout << result << endl;
    
    return 0;
}

