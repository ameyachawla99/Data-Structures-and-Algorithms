#include<iostream>
using namespace std;

void Revere(int a[],int n)
{
	for(int i=0;i<=n/2;i++)
		swap(a[i],a[n-i-1]);

}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the length of array:";
	cin>>n;
	cout<<endl;
	int a[n];
	cout<<"Enter the elements of array:";
	for(int i=0;i<n;i++)cin>>a[i];
	Revere(a,n);
	cout<<"Reversed array :"<<endl;
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}