// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        int total = r*c;
        int startRow = 0;
        int endRow = r-1;
        int startCol = 0;
        int endCol = c-1;
        vector<int> sp;
        int count = 0;
        while(count < total){
            for(int i=startCol; i<=endCol && count<total; i++ ){
                sp.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            for(int i=startRow; i<=endRow && count<total; i++ ){
                sp.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            for(int i=endCol; i>=startCol && count<total; i-- ){
                sp.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            for(int i=endRow; i>=startRow && count<total; i-- ){
                sp.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return sp;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends