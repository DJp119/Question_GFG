//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int digitalRoot(int n)
    {
        // if(n==1) return 1 ;
        
        int k  = n%9 ;
        if(k==2 || k== 3 || k == 5 || k==7) return 1 ;
        return 0 ;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        int ans  = ob.digitalRoot(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends
