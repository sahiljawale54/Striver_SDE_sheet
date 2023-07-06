//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    
	    int i = 0 , j = 0 ;
	    int n = txt.size();
	    int  k = pat.size();
	    int ans = 0;
	    vector<int> pt(26 , 0);
	    vector<int> wind(26 , 0);
	    
	    for(auto ch : pat) pt[ch - 'a']++;
	    
	    //silding window 
	    
	    while(j < n ){
	        
	        wind[txt[j] - 'a']++;
	        
	        if(j - i + 1 < k) j++;
	        
	        else if(j-i+1 == k){
	            if(wind == pt) ans++;
	            
	            wind[txt[i] - 'a']--;
	            i++,j++;
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