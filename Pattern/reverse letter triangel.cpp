#include <bits/stdc++.h>
using namespace std;

void pattern15(int N)
{
    
      // Outer loop for the number of rows.
      for(int i=0;i<N;i++){
          
          // Inner loop will loop for i times and
          // print alphabets from A to A + (N-i-1).
          for(char ch = 'A'; ch<='A'+(N-i-1);ch++){
              cout<<ch<<" ";
              
          }
          // As soon as the letters for each iteration are printed, we move to the
          // next row and give a line break otherwise all letters
          // would get printed in 1 line.
          cout<<endl;
          
      }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N;
    cout<<"Enter the number:";
    cin>>N;
    pattern15(N);

    return 0;
}

Enter the number:5
A B C D E
A B C D
A B C
A B
A
