#include <bits/stdc++.h>
using namespace std;

void pattern6(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
         // This is the inner loop which loops for the columns
        // no. of columns = (N - row index) for each line here
        // as we have to print an inverted pyramid.
        // (N-j) will give us the numbers in a row starting from 1 to N-i.
        for (int j =N; j>i; j--)
        {
            cout <<N-j+1<<" ";
        }
       
        // As soon as numbers for each iteration are printed, we move to the
        // next row and give a line break otherwise all numbers
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N ;
    cout<<"Enter the number:";
    cin>>N;

    pattern6(N);

    return 0;
}

Enter the number:6
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
