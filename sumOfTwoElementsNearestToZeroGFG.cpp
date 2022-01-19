// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            sort(arr,arr+n);
            if(n<2){
                return 2*arr[0];
            }
            else if(arr[0]>0){
                return arr[0]+arr[1];
            }
            else if(arr[n-1]<0){
                return arr[n-1]+arr[n-2];
            }
            int low=0, high=n-1, minSum = INT_MAX;
            while(low < high){
                int sum = arr[low]+arr[high];
                if(abs(sum) < abs(minSum)){
                    minSum = sum;
                }
                if(abs(sum) == abs(minSum)){
                    minSum = max(minSum,sum);
                }
                if(sum<0){
                    low++;
                }
                else{
                    high--;
                }
            }
            return minSum;
        }
};

// { Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends