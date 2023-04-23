#include<stdio.h>
int counter = 0;
int binarySearch(int arr[], int start, int end, int key){
    counter++;
    if (end >= start) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return binarySearch(arr, start, mid - 1, key);
        return binarySearch(arr, mid + 1, end, key);
    }
    return -1;
}
 
int main(){
    int arr[] = {1, 3, 5, 8, 10, 20, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int var = binarySearch(arr, 0, n - 1, key);
    (var == -1) ? printf("Element is not present!\n") : printf("Element present at index %d\n", var);
    printf("The loop ran %d times", counter);
    return 0;
}