#include<iostream>
#include<cstring>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    char T[30][10],P[20][10];
    int n,m,i;
    cout<<"Enter text :  "<<endl;
    for(i=0;i<1;i++)
    {
        gets(T[i]);
        n=strlen(T[i]);
        cout<<n;
    }
    cout<<"Enter string to be matched :"<<endl;
    for(i=0;i<1;i++)
    {
        gets(P[i]);
        m=strlen(P[i]);
        cout<<m;
    }
    for(i=0;i<n-m;i++)
    {
        int j=0;
        while((j<m)&&(P[j]==T[i+j]))
        {
            j=j+1;
            if(j==m)
            {
                cout<<"MATCH FOUND AT LOCATION  "<<i<<endl;

            }
            else
            {
                cout<<"MATCH NOT FOUND"<<endl;

            }

        }

    }

    return 0;
}
