//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    int count(int n){
        int sum = 0 ;
        while(n != 0){
            int rem = n%10;
            sum+=rem;
            n=n/10;
        }
        return sum;
    }
public:
    int sumOfDigits(int n){
        // if(n==0 ) return 0 ;
        // if(n==1) return 1 ;
        // int k = 0 ;
        // k = k + n ;
        // sumOfDigits(n-1);
        // return k ;
        int k = 0 ;
        for(int i = 1  ; i<=n;i++) {
            k  = k + count(i) ;
        }
        return k ;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
