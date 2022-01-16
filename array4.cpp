/* an array as input positive element on left side and negative right side*/
#include<iostream>
using namespace std;
int main(){
    int A[20],B[20],C[20];
    int N=0,P=0;
    cout<<"enter 5 numbers";
    for(int i=0;i<=4;++i){
        cin>>A[i];
    }
    for(int i=0;i<=4;++i)
        if(A[i]>0)
        B[P++]=A[i];
    else
        C[N++]=A[i];
    for(int i=0;i<P;++i){
        A[i]=B[i];

    }
    for(int i=0;i<N;++i)
    {
        A[P+i]=C[i];

    }
    cout<<"The desired pattern of array is:"<<endl;
    for(int i=0;i<=4;i++){
        cout<<A[i]<<"\t\t";
    }
return 0;
}
