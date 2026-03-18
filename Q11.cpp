#include<iostream>
using namespace std;
int main(){
    int numberoforders;
    float price,discount;
    cout<<"\nENTER NUMBER OF ORDERS : ";
    cin>>numberoforders;
    cout<<"\nENTER THE PRICE PER ITEM : ";
    cin>>price;
    discount=0.10*(numberoforders*price);
    if(numberoforders>1000){
        cout<<"\nTHE TOTAL BILL IS :rs "<<discount+(numberoforders*price);
    }
    else 
    {
        cout<<"\nTHE TOTAL BILL IS :rs "<<(numberoforders*price);
    }
    return 0;
}