/*INSERTION AT SPECIFIED POSITION IN ARRAY*/
#include<bits/stdc++.h>
using namespace std;
int arr[100];
void insert(int s,int p,int k)
{
	int i;
	for(i=s;i>p;i--)
	{
		arr[i]=arr[i-1];
	}
arr[p]=k;

}
int main()
{
	
	int size,key,j,pos;
	cout<<"Enter size of array";
	cin>>size;
	cout<<endl;
	cout<<"Enter elements in an array";
	for(j=0;j<size;j++)
	{
		
		cin>>arr[j];
		cout<<endl;
	}
	cout<<"enter position and element to be inserted at that position";
	cin>>pos>>key;
	cout<<endl;
	insert(size,pos,key);
	cout<<"Elements after insertion";
	for(j=0;j<=size;j++)
	{
		
		cout<<arr[j]<<endl;

	}

return 0;
}
