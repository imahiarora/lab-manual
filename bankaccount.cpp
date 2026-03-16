#include<iostream>
using namespace std;
class BankAccount{
string accountHolderName;
int accountNumber;
double balance;
public:
void deposit(double amount){
    balance=balance+amount;
    cout<<"successful deposit and balance is:"<<balance;

}
void withdraw(double amount){
    if(amount>0&&amount<=balance){
        balance=balance-amount;
        cout<<"successsful withdrawal"<<balance;    }
        else if(amount>balance){
            cout<<"insufficient balance";
        }
        else{
            cout<<"invalid withdrawal";
        }
}


void inputDetails()
{
    cout<<"\n ENTER ACCOUNT NUMBER";
   cin>>accountNumber;
   cout<<"\n ENTER ACCOUNT HOLDER NAME";
   cin.ignore();
   getline(cin,accountHolderName);
   
   
   cout<<"\n enter balance";
   cin>>balance;
}
void displayDetails(){
    cout<<"\n Account Number "<< accountNumber<<"\nAccount Holder Nam"<< accountHolderName<<"\n Balance:"<<balance;
}

};
int main(){
    BankAccount a1;
    a1.inputDetails();
    a1.displayDetails();
    char choice;
    cout<<"\n D for deposit and W for withdrawal";
    cin>>choice;
    if(choice=='D'){
        a1.deposit(11000.67);
    }
    else{
        a1.withdraw(11000.67);
    }
return 0;
}