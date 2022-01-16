// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    int L,R;
	    for(int i=n-1; i>1; i--){
	        L = 0;
	        R = i-1;
	        int num = arr[i]*arr[i];
	        while(L<R){
	            int sum = arr[L]*arr[L] + arr[R]*arr[R];
	            if(sum ==  num){
	                return true;
	            }
	            else if(sum >  num){
	                R--;
	            }
	            else{
	                L++;
	            }
	        }
	    }
	    return false;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends