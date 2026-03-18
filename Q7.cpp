#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"\nenter score for player 1 : ";
    cin>>a;
    cout<<"\nenter score for player 2 : ";
    cin>>b;
    cout<<"\nenter score for player 3 : ";
    cin>>c;
    if(a<b){
        if(b>c){
            cout<<"\nPLAYER 2 SCORED THE HIGHEST";
        }
        else {
            cout<<"\nPLAYER 3 SCORED THE HIGHEST";
        }
    }
    else{
        if(a>c){
            cout<<"\nPLAYER 1 SCORED THE HIGHEST";
        }
        else {
            cout<<"\nPLAYER 3 SCORED THE HIGHEST";
        }
    }
    return 0;
}