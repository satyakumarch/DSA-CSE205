#include <bits/stdc++.h>
using namespace std;
bool ArmstrongNumber(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit,count);
        n /= 10;
    }
    return (sumofpower == originalno);
}
int main()
{
    int n1;
    cout<<"Enter the number:";
    cin>>n1;
    if (ArmstrongNumber(n1))
    {
        cout << "Yes, it is an Armstrong Number\n";
    }
    else
    {
        cout << "No, it is not an Armstrong Number\n";
    }
    return 0;
}

output
Enter the number:243
No, it is not an Armstrong Number
