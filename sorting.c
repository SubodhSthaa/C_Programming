//WAP to sort the given array in ascending order//
#include<stdio.h>
int main()
{
	int arr[5]={4,0,3,2,1};
	int i,j,temp;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		printf("%d",arr[i]);
	}
	return 0;
}
