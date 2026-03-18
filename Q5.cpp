/*#include<iostream>
using namespace std;
void swap(int a,int b)
{int c;
    a=b;
    b=c;
    c=a;
    cout<<"\nA : "<<a;
    cout<<"\nB : "<<b;
}
int main(){
    swap(1,2);
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"\nENTER VALUE FOR A AND B : ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"NEW VALES AFTER SWAP\nA : "<<a<<"\nB : "<<b;
    return 0;
    
}
