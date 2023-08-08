class Solution {
    int getPivot(vector<int>& arr,int n){
    int s=0;
    int e=n-1;
    
    while(s < e){
        int mid= s+(e-s)/2;
        if(arr[mid] >= arr[0]) s=mid+1;
        else e=mid;      
    }
    return s;
}
    int BS(vector<int>& arr , int s, int e, int k){
    int start =s;
    int end=e;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==k) return mid;
        else if(arr[mid] > k) end = mid -1;
        else start = mid +1;       
    }
    return -1;
}
public:
    int search(vector<int>& nums, int target) {
        int pivot= getPivot(nums,nums.size());
        if(target>= nums[pivot] && target<=nums[nums.size()-1]){
            return BS(nums,pivot,nums.size()-1,target); // 2nd line
        }
        else{
            return BS(nums,0,pivot-1,target);  // 1st line 
        }
    }
};