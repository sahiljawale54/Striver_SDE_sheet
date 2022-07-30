int findDuplicate(vector<int> &arr) 
{
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<arr.size();i++){ // 1 se N-1 no hai array mai 
        ans=ans^i;
    }
	return ans;
}
