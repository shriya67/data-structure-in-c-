/* C++ program to demosnstrate array elements are stored in memory locations */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ar[5],i;
	cout<<"Size of integer in this compiler is"<<sizeof(int)<<endl;
	for(i=0;i<5;i++)
	cout<<"Address ar["<<i<<"] is"<<&ar[i]<<endl;
	return 0;
}
