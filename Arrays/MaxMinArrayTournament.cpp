#include<bits/stdc++.h>

using namespace std;
struct Pair
{
	int maxi;
	int mini;


};
struct Pair find(int a[],int i,int j)
{   struct Pair c;
	if(i==j) 
	{
		
		c.maxi=a[i];
		c.mini=a[i];
		return c;
	}

	if(i+1==j)
	{
		
		c.maxi=max(a[i],a[j]);
		c.mini=min(a[i],a[j]);
		return c;

	}

	else
	{
		struct Pair c1 =find(a,i,(i+j/2));
		struct Pair c2= find(a,(i+j)/2+1,j);
		c.maxi=max(c1.maxi,c2.maxi);
		c.mini=max(c1.mini,c2.mini);

		return c;

	}


}


int main(int argc, char const *argv[])
{
	int a[5]={4,3,2,1,7};

	struct Pair d =find(a,0,4);

	cout<<d.mini<<"  "<<d.maxi;
	return 0;
}