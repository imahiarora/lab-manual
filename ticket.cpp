#include<iostream>
#include<string>
using namespace std;
class MovieTicket{
public:
string movieName;
int seatNumber;
double ticketPrice;
bool isBooked;
MovieTicket(){
isBooked=false;
ticketPrice=200;
}
MovieTicket(string m,int s,double t){
movieName=m;
ticketPrice=t;
seatNumber=s;
isBooked=false;
}
void bookTicket(){
if(!isBooked){
isBooked=true;
cout<<"\n Ticket is booked";}
else{
cout<<'\n Ticket is not booked';
}
}
void cancelTicket() {
if (isBooked) {
isBooked = false;
cout << "Ticket cancelled successfully!\n";
} else {
cout << "Ticket is not booked yet.\n";
}
}
void displayTicketdetails(){
cout<<"\n movie name :"<<movieName;
cout<<"\n ticket price is:"<<ticketPrice;
cout<<"\n seat number is :"<<seatNumber;
cout<<"\n status :"<<(isBooked?"Booked":"Not Booked");
cout<<"\ntotal cost :"<<calculateTotalCost(6);
}
float calculateTotalCost(int numberOfTickets) {
return ticketPrice * numberOfTickets;}
};
int main(){
MovieTicket M1("abc",27,250);
M1.displayTicketdetails();
cout<<"\n ";
M1.bookTicket();
cout<<"\n";
M1.displayTicketdetails();
cout<<"\n";
MovieTicket M2("life list",25,150);
M2.displayTicketdetails();
return 0;
}
