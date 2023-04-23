#include <stdio.h>

void insertionboi(int arr[], int len){
    int i, j, temp;
    for(i = 1; i< len-1; i++){
        j = i;
        while(j>0 && arr[j-1] > arr[j] ){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }


}

int main(){
    int arr[] = {3,1,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    insertionboi(arr, len);
    printf("The sorted array is :");
    for(int i = 0; i<len;i++){
        printf("%d ", arr[i]);
    }
}