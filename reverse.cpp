#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int rem,num,sum=0,copy,count=0,result=0;
    cout<<"ENTER VALUE FOR NUMBER : ";
    cin>>num;
    //check for perfect number 
    for(int i=0;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        cout<<"\nthis is a perfect number";
    }
    else{
        cout<<"\nthis is a not a perfect number";
    }
    //check for armstrong
    copy=num;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    copy=num;
    while(num>0)
{
    rem=num%10;
    result=result*10+pow(rem,count);
    num=num/10;
   cout<<result;
}
if (copy==result)
{
    cout<<"\nthis is amstrong";
}
else
{
    cout<<"\nnot amstrong";
}
return 0;
}
