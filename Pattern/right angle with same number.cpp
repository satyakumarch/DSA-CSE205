#include <bits/stdc++.h>
using namespace std;

void pattern4(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 1; i <= N; i++)
    {
        // This is the inner loop which loops for the columns
       // no. of columns = row number for each line here.
       // Here, we print numbers equal to the row number
       // instead of stars in each row.
        for (int j = 1; j <=i; j++)
        {
            cout <<i<<" ";
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

    pattern4(N);

    return 0;
}


Enter the number:7
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7
