#include<iostream>
using namespace std;
int main()
{

    int A[20],i,j,key,n;
    cout<<"Enter space of array";
    cin>>n;
    cout<<"enter the desired number of elements";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(j=2;j<5;j++)
    {
        key=A[j];
        i=j-1;
        while(i>0&&A[i]>key)
        {
            A[i+1]=A[i];
            i=i-1;
            A[i+1]=key;
        }
    }

    cout<<"INSERTION SORTED ELEMENTS ARE"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<"  ";
    }

}
