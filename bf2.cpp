#include<iostream>
#include<cstring>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
    string s,t;
    int n,m,i,f,j;

    cout<<"Enter text :  "<<endl;
    cin>>s;
    n=s.length();

    cout<<"Enter string to be matched :"<<endl;
    cin>>t;
    m=t.length();

    f=0;

    for(i=0;i<n-m;i++)
    {
        int j=0;

        while((j<m)&&(t[j]==s[i+j]))
        {
            j=j+1;

            if(j==m)
            {
                cout<<"MATCH FOUND AT LOCATION  "<<i<<endl;
                f=1;
                break;
            }
        }
    }

    if (f==0)
    {
        cout<<"MATCH NOT FOUND"<<endl;
    }

    return 0;
}
