/* C++ PROGRAM TO IMPLEMENT DELETE OPERATION IN AN UNSORTED ARRAY */
#include<bits/stdc++.h>
using namespace std;
int findElement(int arr[],int n,int key);
int deleteElement(int arr[],int n,int key)
{
	int pos=findElement(arr,n,key);
	if(pos==-1)
	{
		cout<<"Element not found";
		return n;
	}
int i;
for(i=pos;i<n-1;i++)
{

arr[i]=arr[i+1];
return n-1;
}
}
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
	int i;
	int arr[]={10,50,30,40,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=30;
	cout<<"Array before deletion \n";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	deleteElement(arr,n,key);
	cout<<"\n\n Array after deletion";
	for(i=0;i<n;i++)
	{
	
	cout<<arr[i]<<" ";
}

	return 0;
}
