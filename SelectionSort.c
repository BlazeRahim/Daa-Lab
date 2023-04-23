#include<stdio.h>
int counter = 0;
int selectionSort(int arr[], int n)  {  
    int i, j, var;  
      
    for (int i = 0; i < n-1; i++){  
        var = i;   
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[var]) var = j;
            counter++;
        }
            int temp = arr[var];  
            arr[var] = arr[i];  
            arr[i] = temp;  
            }
    return 0;  
}  
  
int main(){ 
    
    int arr[] = {1, 25, 4, 90, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted Array - \n");
    for (int i = 0; i < n; i++)  
        printf("%d ", arr[i]);  
    printf("\nThe number of time Loop ran was %d", counter);
    return 0;

}    
