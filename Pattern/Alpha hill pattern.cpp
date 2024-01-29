#include <bits/stdc++.h>
using namespace std;

void pattern17(int N)
{
    
      // Outer loop for the number of rows.
      for(int i=0;i<N;i++){
          
          // for printing the spaces.
          for(int j=0;j<N-i-1;j++){
              cout<<" ";
          }
          
          // for printing the characters.
          char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch;
              if(j <= breakpoint) ch++;
              else ch--;
          }
          
          // for printing the spaces again after characters.
          for(int j=0;j<N-i-1;j++){
              cout<<" ";
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
    
    pattern17(N);

    return 0;
}


Enter the number:5
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
