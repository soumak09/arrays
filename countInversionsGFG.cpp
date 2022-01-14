// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


 // } Driver Code Ends
//User function Template for C


// arr[]: Input Array
// N : Size of the Array arr[]
// Function to count inversions in the array.
long long merge(long long arr[], long long left, long long mid,long long right){
    long long inv = 0;
    long long n1 = mid-left+1;
    long long n2 = right - (mid+1) + 1;
    long long a[n1];
    long long b[n2];
    for(int i=0; i<n1; i++){
        a[i]=arr[left+i];
    }
    for(int i=0; i<n2; i++){
        b[i]=arr[mid+i+1];
    }
    int i=0, j=0, k=left;
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            inv = inv +  (n1-i);
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++;
        j++;
    }
    return inv;
}
long long mergeSort(long long arr[], long long left, long long right){
    long long mid, inv = 0;
    if(right > left){
        mid = (right+left)/2;
        inv = inv + mergeSort(arr,left,mid);
        inv = inv + mergeSort(arr,mid+1,right);
        inv = inv + merge(arr,left,mid,right);
    }
    return inv;
}
long long int inversionCount(long long arr[], long long n)
{
    // Your Code Here
    long long ans = mergeSort(arr,0,n-1);
    return ans;
}



// { Driver Code Starts.

int main() {
    
    long long T;
    scanf("%ld", &T);
    
    while(T--){
        long long N;
        scanf("%ld", &N);
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            scanf("%ld", &A[i]);
        }
        
        printf("%ld\n", inversionCount(A,N) );
    }
    
    return 0;
}
  // } Driver Code Ends