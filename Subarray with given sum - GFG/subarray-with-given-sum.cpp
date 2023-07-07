//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
    vector<int> ans;
    if(s == 0) return {-1};
 int i = 0, j = 0;
    long long sum = 0;
    
    while (j < n) {
        sum += arr[j];
        
        if (sum < s) {
            j++;
        }
        else if (sum == s) {
            ans.push_back(i + 1);
            ans.push_back(j + 1);
            return ans;
        }
        else if(sum > s) {
            while (sum > s) {
                sum -= arr[i];
                i++;
            }
            if (sum == s) {
                ans.push_back(i + 1);
                ans.push_back(j + 1);
                return ans;
            }
            j++;
        }
    }
    
    ans.push_back(-1);
    
    return ans;
}

};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends