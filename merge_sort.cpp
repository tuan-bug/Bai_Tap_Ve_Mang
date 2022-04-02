void merge(int arr[], int l, int m, int r){
    int TA[100];
    int i = l, j = m + 1;
    for(int k = l; k <= r;k++){
        if(i > m){
            TA[k] = arr[j];
            j++;
        } else if(j > r){
            TA[k] = arr[i];
            i++;
        }else{
            if(arr[i] < arr[j]){
                TA[k] = arr[i];
                i++;
            }else{
                TA[k] = arr[j];
                j++;
            }
            
        }
    }
    for(int k = l; k <= r;k++){
        arr[k] = TA[k];
    }
}

void merge_sort(int arr[], int l, int r){
    if(l < R){
        int M = (l + r) / 2;
        merge_sort(arr,l,M);
        merge_sort(arr, M + 1, r);
        merge(arr,l,M,r);
    }
}
