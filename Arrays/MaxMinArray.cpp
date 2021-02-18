#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[6]={5,4,3,2,1,2};

	int mini=INT_MAX;
	int maxi=INT_MIN;

	for(int i=0;i<sizeof(a)/sizeof(int);i++)
	{
		if(a[i]<mini)mini=a[i];
		if(a[i]>maxi)maxi=a[i];
	}

	cout<<"Max no"<<maxi<<endl<<"Min no"<<mini;

	return 0;
}