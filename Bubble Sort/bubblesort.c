#include <stdio.h>
#include <stdlib.h>
#define 50 MAX

 
void bubblesort (int arr[],int size){
	int i,j;
	for (i=0;i<size;i++){
		for(j=1;j<size-i;j++){
			if(arr[j-1]>arr[j]){
				int temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
}
