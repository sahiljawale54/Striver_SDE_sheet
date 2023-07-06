//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    
	    int i = 0 , j = 0;
	    int n = txt.size();
	    int ans = 0;
	    unordered_map<char , int> mp;
	    for(auto ch : pat) mp[ch]++;
	    
	    int count = mp.size();
	    
	    while(j<txt.size()){
	        // calcution
	        mp[txt[j]]--;
	        if(mp[txt[j]] == 0) count--;
	        
	        if(j-i + 1 < pat.size()) j++;
	        else if(j-i+1 == pat.size()){
	            if(count == 0) ans++;
	            mp[txt[i]]++;
	            if(mp[txt[i]] == 1) count++;
	            i++ , j++;
	        }
	    }
	    return ans;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends