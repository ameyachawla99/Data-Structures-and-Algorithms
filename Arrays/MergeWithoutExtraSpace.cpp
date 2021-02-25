// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    if(arr1[n-1]<=arr2[0])return;
	    int p=n-1;
	    for(int i=0;i<m;i++)
	    {   if(p<0)break;
	        if(arr2[i]<=arr1[0] or arr2[i]>arr1[0] and arr2[i]<arr1[p])
	        {
	            swap(arr2[i],arr1[p--]);
	            
	        }
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends