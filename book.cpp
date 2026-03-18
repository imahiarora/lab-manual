#include<iostream>
#include<string>
using namespace std;
class book{
public:
string title;
string author;
double price;
void inputDetails(){
cin.ignore(); 
cout << "\nEnter title: ";
getline(cin, title); 
cout << "\nEnter author: ";
getline(cin, author);
cout << "\nEnter price: ";
cin >> price;
}
void displayDetails() {
cout << "\nTitle: " << title ;
cout << "\nAuthor: " << author ;
cout << "\nPrice: " << price ;
}
};
int main(){
book b1;
b1.inputDetails();
b1.displayDetails();
return 0;
}