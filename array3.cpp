/*C/C++ Program for Write a program to reverse an array*/
#include<iostream>
using namespace std;
int main(){
    int A[20],M;
    cout<<"enter size of array";
    cin>>M;
    cout<<"Enter numbers in an array"<<endl;
    for(int i=0;i<M;i++){
        cin>>A[i];
    }
    cout<<"Reverse of the array is:";
    for(int i=M;i>0;i--){
            cout<<A[i]<<endl;
        }




return 0;
}
