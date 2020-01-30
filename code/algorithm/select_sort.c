void select_sort() {
    for(int i = 0; i < n; i++){
        int k = i;
        for(int j = i; j < n; j++){
            if(A[j] < A[k]){
                k = j;
            }
        }
        int temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    }
}
