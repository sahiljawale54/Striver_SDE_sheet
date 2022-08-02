int getPivot(vector<int>& arr,int n){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    
    while(s < e){
        if(arr[mid] >= arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}

int BS(vector<int>& arr , int s, int e, int k){
    int start =s;
    int end=e;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid] > k){
            end = mid -1;
        }
        else{
            start = mid +1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int findPosition(vector<int>& arr, int n, int k)
{
    int pivot= getPivot(arr,n);
    if(k>= arr[pivot] && k<=arr[n-1]){
        return BS(arr,pivot,n-1,k);
    }
    else{
        return BS(arr,0,pivot-1,k);
    }
}

