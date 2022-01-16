#include<iostream>

int main()
{
    using namespace std;
    int a[5],b[5],c[5];
    int i,p=0,n=0;
    cout<<"enter 5 numbers";
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
        cout<<endl;

    }
    for(i=0;i<=4;i++)
        {
        if(a[i]<0)
            c[n++]=a[i];
        else
            b[p++]=a[i];
        }
cout<<"The desired pattern is:";

    for(i=0;i<n;i++)
    {
        cout<<c[i]<<endl;

    }
    for(i=0;i<p;i++)
    {
        cout<<b[i]<<endl;
    }
}

