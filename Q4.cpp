#include<iostream>
using namespace std;
int main()
{
    float unitprice;
    int quantity,itemno;
    float discount=0.5;
    cout<<"\nENTER ITEM NO. : ";
    cin>>itemno;
    cout<<"\nENTER QUANTITY OF THE ITEMS : ";
    cin>>quantity;
    cout<<"\nENTER PRICE PER ITEM : ";
    cin>>unitprice;
    float totalBill= (quantity*unitprice)-(discount*quantity*unitprice);
    cout<<"\nTOTAL BILL AFTER DISCOUNT IS : "<<totalBill;
return 0;
}