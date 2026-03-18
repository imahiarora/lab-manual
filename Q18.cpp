#include <iostream>
#include <string>
using namespace std;
int main()
{
    string id;
    string reverse = "";
    cout << "Enter ID: ";
    cin >> id;
    for(int i = id.length()-1; i >= 0; i--)
    {
        reverse = reverse + id[i];
    }
    if(id == reverse)
        cout << "Palindrome ID";
    else
        cout << "Not a Palindrome ID";
    return 0;
}