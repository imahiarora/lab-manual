#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cout<<"enter two strings:";
    cin>>a;
    cin>>b;
    int count[26]={0};
    for(int i=0;i<a.length();i++)
    { 
        count[a[i]-'a']++;
        count[b[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            cout<<" not anagram";
              return 0;
        }
    }
    cout<<"anagram";
    return 0;

}