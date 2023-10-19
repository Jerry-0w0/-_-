#include<stdio.h>
#include<stdlib.h>

void reverseArray(int* arr, int i ,int size){
	int i = 0 ,temp;
	if (i >= size /2){
		return;
	}
	else{
		temp = arr[i];
		arr[i] = arr[size-1-i];
		arr[size-1] = temp;
		reverseArray(arr, i+1 ,size);
	}
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, 0, size - 1);

    // 打印反轉後的數組
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}	
