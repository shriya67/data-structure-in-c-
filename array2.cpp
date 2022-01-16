/* C/C++ Program for Merge an array of size n into another array of size m+n */
#include<iostream>
using namespace std;
int main(){
    int A[100],B[100],C[100],m,n;
    cout<<"Enter size of first array";
    cin>>m;
    cout<<"Enter size of second array";
    cin>>n;

    cout<<"Enter numbers of first array";
    for(int i=0;i<m;i++)
    {
        cin>>A[i];
        C[i]=A[i];
    }
    cout<<"Enter numbers of second array";
    for(int i=0;i<n;i++){
        cin>>B[i];
        C[m+i]=B[i];
    }
    cout<<"list of numbers after merging 2 arrays is:";
    for(int i=0;i<m+n;i++){

        cout<<C[i]<<endl;
    }
 return 0;
}
