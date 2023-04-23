#include<stdio.h>

int  merge(int arr[], int low,int mid, int high){
	int w;
	int k = low;
	int i = 0;
	int j = 0;
	int n1 = mid - low +1;
	int n2 = high-mid;
	int ltemp[10000], rtemp[10000];
	for(w = 0; w< n1; w++) ltemp[w] = arr[low+w];
	for(w = 0; w < n2; w++) rtemp[w] = arr[mid+1+w];
	while( i < n1 && j < n2){
		if (ltemp[i] <= rtemp[j]){
			arr[k] = ltemp[i];
			i++;
			k++;
		}
		else{
			arr[k] = rtemp[j];
			j++;
			k++;
		}
	}
	while(i<n1){
		arr[k] = ltemp[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k] = rtemp[j];
		k++;             
		j++;
	}

	return 0;
}

int MergeSort(int arr[], int low, int high){
	if(low<high){
		int mid = (low+high)/2;
		MergeSort(arr, low, mid);
		MergeSort(arr, mid+1, high);
		merge(arr, low, mid, high);
	}
	return 0;
}

int main(){
	int i;
	int high;
	int arr[1000];
	int low = 0;
	// clrscr();
	printf("Enter size : ");
	scanf(" %d", &high);
	printf("Enter ya array \n");
	for(i = 0; i < high; i++) scanf("%d ",&arr[i]);
	MergeSort(arr, low, high-1);
	for(i = 0; i < high ; i++) printf("%d ",arr[i]);
		// getch();
	return 0;
}