#include<iostream>
using namespace std;
int main()
{
    int A[10],Sn,P=0;

cout<<"Enter 10 numbers"<<endl;
    for(int i=0;i<=9;++i)
    {

        cin>>A[i];

    }
    cout<<"Enter number to be searched";
    cin>>Sn;
    int length=10;
    int Li=0,Ui=length-1;
    int Mp,Pos;
    while(Li<=Ui)
    {
        Mp=(Li+Ui)/2;
        if(A[Mp]==Sn)
        {
            Pos=Mp+1;
            cout<<"Element found at position"<<endl<<Pos;
            break;
        }
        else if(A[Mp]<Sn)
            Li=Mp+1;
        else
            Ui=Mp-1;
    }
    if(Pos==0)
        cout<<"Element not found"<<endl;
}
