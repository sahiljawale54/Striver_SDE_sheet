void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1; i<n ; i++){
        int j = i -1;
        int tem = arr[i];
        for(; j >= 0; j--){
            if(arr[j] > tem){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1]= tem;
    }
}
// TC- O(N2)
//   BEST- O(N)
// SC- O(1)
