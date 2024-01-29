#include <bits/stdc++.h>
using namespace std;

void pattern21(int n)
{
     // outer loop for no. of rows.
     for(int i=0;i<n;i++){
         
         // inner loop for printing the stars at borders only.
         for(int j=0;j<n;j++){
             
             if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
                
             // if not border index, print space.
             else cout<<" ";
         }
         
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
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
    
    pattern21(N);

    return 0;
}

Enter the number:5
*****
*   *
*   *
*   *
*****
