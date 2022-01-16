#include<iostream>
using namespace std;
int main()
{
    int A[20],i,j,n,t;
    cout<<"Enter space of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<n-1;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(A[j]<A[i])
            {
                t=A[j];
                A[i]=A[j];
                A[j]=t;
            }
        }
    }

    cout<<"SELECTION SORTED ELEMENTS ARE"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<"  ";
    }

    return 0;
}
