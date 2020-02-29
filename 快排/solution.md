

```c++
int partition(vector<int> &arr, int left, int right) {
	int i = left + 1;
    int j = right;
    int pivot = arr[left];
    while(i <= j) {
        while (arr[i] <= pivot)
            i++;
            
        while (arr[j] > pivot)
            j--;
        
        if (i<j)
            swap(arr[i++], arr[j--])
    }
    swap(arr[j], arr[left]);
    return j;
}

void quik_sort(vector<int> &arr, int left, int right) {
    if (left >= right)
        return;
    
    int j = partition(arr, left, right);
    quick_sort(arr, left, j-1);
    quick_sort(arr, j+1, right);
}
```

