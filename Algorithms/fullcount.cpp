#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    string s[n];
    for(long long i=0;i<n/2;i++)
    {
        int x;
        cin>>x;
        string q;
        cin>>q;
        s[x]=s[x]+"-"+" ";    
    }
    for(long long i=(n/2);i<n;i++)
    {
        int x;
        cin>>x;
        string q;
        cin>>q;
        s[x]=s[x]+q+" ";
    }
    for(long long i=0;i<n;i++)
    {
        cout<<s[i];
    }
    return 0;
}
