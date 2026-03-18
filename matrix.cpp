#include<iostream>
using namespace std;
int main(){
    int a[2][2],b[2][2],sum[2][2];
    cout<<"inventory matrix of 2x2";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nreward matrix of 2x2is : ";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
        {
            cin>>b[i][j];
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nupdated matrix of 2x2 is : \n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum[i][j]=a[i][j]+b[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}