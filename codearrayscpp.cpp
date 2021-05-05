#include<iostream>
using namespace std;
int main()
{
	int i,a[100],n,*p;
	p=a;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements:";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	cout<<"You entered:";
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	return 0;
}
