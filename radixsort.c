#include <stdio.h>
#include <stdlib.h>

int getMax(int arr[],int n){
	int mx =arr[0];
	for(int i=1;i<n;i++){
		if (arr[i]>mx){
			mx=arr[i];
		}
	}
	return mx;
}

int main(int argc, char *argv[]) {
	return 0;
}
