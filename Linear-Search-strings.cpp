#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char A[10][20],Sn[20];
    int Pos=0;
    for(int i=0;i<=9;++i)
    {
        cout<<"Enter name";
        gets(A[i]);

    }
    cout<<"Enter name to be searched";
    gets(Sn);
    for(int i=0;i<=9;++i)
    {
        if(strcmpi(Sn,A[i])==0)
        {
            Pos=i+1;
            cout<<"Name Found at position"<<endl<<Pos;
            break;
        }
    }
    if(Pos==0)
        cout<<"Name not found"<<endl;
}
