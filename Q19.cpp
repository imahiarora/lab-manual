#include <iostream>
using namespace std;

int main()
{
    int start, end;
    
    cout << "Enter starting number: ";
    cin >> start;
    
    cout << "Enter ending number: ";
    cin >> end;

    for(int i = start; i <= end; i++)
    {
        int count = 0;

        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            cout << i << " ";
        }
    }

    return 0;
}