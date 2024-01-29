#include <bits/stdc++.h>
using namespace std;

void pattern14(int N)
{
    
      // Outer loop for the number of rows.
      for(int i=0;i<N;i++){
          
          // Inner loop will loop for i times and
          // print alphabets from A to A + i.
          for(char ch = 'A'; ch<='A'+i;ch++){
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
    pattern14(N);

    return 0;
}


Enter the number:5
A
A B
A B C
A B C D
A B C D E
