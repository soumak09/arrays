// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int uneatenLeaves(int arr[],int n,int k);


int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
         
        int n;
        cin>>n;
        int k;
        cin>>k;
        int arr[k];
        for(int i=0;i<k;i++)
        cin>>arr[i];
        cout<<uneatenLeaves(arr,n,k)<<endl;
    }
 }
    
        // } Driver Code Ends


int uneatenLeaves(int arr[],int n,int k)
{
    // Your code goes here
    vector<int> vec(n + 1, 0);
    int cnt = 0;
    for(int i = 0 ; i < k ; i++){
        for(int j = arr[i]; j <= n; j+= arr[i]){
            if(arr[i] == 1){
                return 0;
            }
            vec[j]++;
        }
    }
   for(int i = 1; i <= n ; i++){
        if(vec[i] == 0) cnt++;
    }
   return cnt;
}
