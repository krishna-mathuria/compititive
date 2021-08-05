#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    long long int ans=0;
	    for(int i=0;i<n-2;i++){
	        int j=i+1;
	        int k = n-1;
	        while(j<k){
	            if(sum<=arr[i]+arr[j]+arr[k]){
	                k--;
	            }
	            else{
	                ans+=k-j;
	                j++;
	            }
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}