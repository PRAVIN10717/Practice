#include<stdio.h>
#include<stdlib.h>
int findMaxValue(int *arr,int size){
	int locMax,globMax;
	locMax=arr[0];
	globMax=arr[0];
	int i;
	for(i=1;i<size;i++){
		locMax=arr[i]>(locMax+arr[i])?arr[i]:locMax+arr[i];
		globMax=globMax>locMax?globMax:locMax;
	}
	return globMax;
}
int main(){
	int noOfInput,size,*stringData,maxValue;
	scanf("%d",&noOfInput);
	int i,j;
	for(i=0;i<noOfInput;i++){
		scanf("%d",&size);
		stringData=malloc(size*sizeof(int));
		for(j=0;j<size;j++){
			scanf("%d",(stringData+j));
		}
		maxValue=findMaxValue(stringData,size);
		printf("%d",maxValue);
	}
}