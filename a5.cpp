/* C++ program to implement insert operation in an unsorted array */
#include<bits/stdc++.h>
using namespace std;
int insertSorted(int arr[],int n,int key,int capacity)
{
	if(n>=capacity)
	{
	
	return n;
}
	arr[n]=key;
	return(n+1);
}
int main()
{
	int arr[20]={12,16,20,40,50,70};
	int capacity=sizeof(arr)/sizeof(arr[0]);
	int n=6,ni;
	int i,key=26;
	cout<<"\n Before Insertion : ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	insertSorted(arr,n,key,capacity);
	cout<<"\n After Insertion :";
	for(i=0;i<n;i++);
	
		cout<<arr[i]<<" ";
		
	
	return 0;
}
