#include<iostream>
using namespace std;
int main()
{
   int A[10],I,Sn,P=0;
   cout<<"Enter 10 numbers";
   for(int i=0;i<=9;++i)
        cin>>A[i];
   cout<<"Enter number to be search";
   cin>>Sn;
   for(int i=0;i<=9;++i)
   {
       if(A[i]==Sn)
       {
           P=i+1;
           cout<<"Position="<<P<<endl;
           break;
       }
   }
   if(P==0)
    cout<<"Element not found";
    return 0;
}
