#include<iostream>
using namespace std;
int main()
{
    int A[10],i,j,t,n;
    cout<<"Enter space of array";
    cin>>n;
    cout<<"enter "<<n<<" numbers";
    for(i=0;i<=n;++i)
    {
        cin>>A[i];
    }
    for(i=0;i<=n-1;++i)
    {
        for(j=0;j<n-i-1;++j)
        {
            if(A[j]>A[j+1])
            {
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
    cout<<"BUBBLE SORTED ELEMENTS ARE:"<<endl;
    for(i=0;i<n;++i)
    {
        cout<<A[i]<<"  ";
    }
 return 0;
}
