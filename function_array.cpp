#include<iostream>
using namespace std;
 void computePerformance (int m[],int n){
    int min=m[0],max=m[0],avg=m[0];
    for(int i=1;i<n;i++)
    {
        if(min>m[i])
        min=m[i];
        if(max<m[i])
        max=m[i];
        avg+=m[i];
    }
     cout<<"min "<<min<<endl<<"max "<<max<<endl<<"avg "<<float(avg)/n<<endl;
 }
 int main(){
    int marks[]={56,78,67,98,76,23,90,66,89,75};
    computePerformance(marks,10);
    return 0;
 }