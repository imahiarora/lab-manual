#include<iostream>
#include<iostream>
using namespace std;

int main(){
int arr[1000]={0};
int n;
cin>>n;
int singer;
int frmax=0;
int count=0;
for(int i=0;i<n;i++){
cin>>singer;
arr[singer]++;
if(arr[singer]>frmax){
    frmax=arr[singer];}}
    for(int j=0;j<1000;j++)
    {
        if (arr[j]==frmax)
        {
            count++
        }
    }
    cout<<"count";
return 0;
}