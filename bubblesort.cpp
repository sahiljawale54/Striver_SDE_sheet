void bubbleSort(vector<int>& arr, int n)
{   
    // round 1 to n;
    for( int i =1; i<n;i++){
        bool swapped = false;
        for(int j = 0; j<n-i;j++){//0 se n-1(last tho correct hoga na )
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
           }
        if(swapped == false){
                break;
        }
    }
}
/*
O(n2)- worst
O(n)- best
O(1)- space complexity
*/
