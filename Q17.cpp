#include <iostream>
#include <cmath>   // for pow()
using namespace std;

int main()
{
    int num, sum = 0, rem, temp, digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    // ----- Perfect Number -----
    sum = 0;
    for(int i = 1; i <= num / 2; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    if(sum == num && num != 0)
        cout << "Perfect Number" << endl;
    else
        cout << "Not a Perfect Number" << endl;

    // ----- Armstrong Number -----
    temp = num;

    // Count digits
    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    sum = 0;

    while(temp > 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);  // generalized power
        temp /= 10;
    }

    if(sum == num)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
