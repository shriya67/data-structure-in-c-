/* Search an element in array using C++ */
#include<bits/stdc++.h>
using namespace std;
int findElement(int arr[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		return i;
	}
	return -1;
}
int main()
{
	int arr[]={12,34,10,6,40};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=40;
	int pos=findElement(arr,n,key);
	if(pos==-1)
	{
		cout<<"Element not found";
		
	}
	else
	{
		cout<<"Elements found at position : "<<pos+1;
		
	}
	return 0;
}
