// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 
class Solution{
    public:
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    int getIndex(int Y[], int N, int ele){
        int low = 0;
        int high = N-1;
        int ans=-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(Y[mid] > ele){
                ans=mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    long long countPairs(int X[], int Y[], int M, int N)
    {
        int one=0,two=0,three=0,four=0;
        sort(X, X+M);
        sort(Y, Y+N);
        long long ans=0;
        for(int i=0; i<N; i++){
            if(Y[i]==1){
                one++;
            }
            if(Y[i]==2){
                two++;
            }
            if(Y[i]==3){
                three++;
            }
            if(Y[i]==4){
                four++;
            }
        }
        for(int i=0; i<M; i++){
            if(X[i]==2){
                int index = getIndex(Y,N,2);
                if(index != -1){
                    ans = ans + (N-index);
                }
                ans = ans - (three+four);
                ans = ans + one;
            }
            else if(X[i]>=3){
                int index = getIndex(Y,N,X[i]);
                if(index != -1){
                    ans = ans + (N-index);
                }
                ans = ans + one;
            }
            if(X[i]==3){
                ans = ans + two;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends