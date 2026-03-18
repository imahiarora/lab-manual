#include <iostream>
using namespace std;
/*{
    int num;
    long long factorial = 1;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    cout << "Factorial = " << factorial;
    return 0;
}*/

    int factorial(int n){
    
        if(n==0){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
       
        }
    
int main(){
    factorial(5);
    cout<<"FACTORIAL OF 5 IS "<<factorial(5);
    return 0;
}