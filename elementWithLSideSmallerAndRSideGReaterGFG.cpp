// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) {
    int ele=-1, big=arr[0], small=arr[n-1];
    int min[n], max[n];
    for(int i=0; i<n; i++){
        if(arr[i] > big){
            big = arr[i];
        }
        max[i] = big;
    }
    for(int i=(n-1); i>=0; i--){
        if(arr[i]<small){
            small = arr[i];
        }
        min[i] = small;
    }
    for(int i=0; i<n; i++){
        if(i != 0 && i != (n-1) && min[i] == max[i]){
            ele = min[i];
            return ele;
        }
    }
    return ele;
}