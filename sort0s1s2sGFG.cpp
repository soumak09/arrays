// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here
        int zero = 0, ONE = 0, two = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == 0){
                zero++;
            }
            else if (a[i] == 1){
                ONE++;
            }
            else if (a[i] == 2){
                two++;
            }
        }
        int k = 0;
        while (zero--){
            a[k] = 0;
            k++;
        }
        while (ONE--)
        {
            a[k] = 1;
            k++;
        }
        while (two--)
        {
            a[k] = 2;
            k++;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends