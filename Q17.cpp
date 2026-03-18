#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, rem, temp;
    cout << "Enter a number: ";
    cin >> num;
    // Check Perfect Number
    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    if(sum == num)
        cout << "Perfect Number" << endl;
    else
        cout << "Not a Perfect Number" << endl;
    // Check Armstrong Number
    temp = num;
    sum = 0;
    while(temp > 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    if(sum == num)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}