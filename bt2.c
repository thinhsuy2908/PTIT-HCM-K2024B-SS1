#include<stdio.h>
int main(){
	const int maxSize=100;
	int array[maxSize];
	int n, currentLength,addIndex,value;
	printf("moi nhap vao so luong phan tu muon su dung : ");
	scanf("%d",&n);
	
	
	printf("nhap gia tri vao phan tu : \n");
	for(int i=0;i<n;i++){
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	currentLength=n;
	printf("moi nhap vao gia tri : ");
	scanf("%d",&value);
	printf("moi nhap vao vi tri muon them vao mang : ");
	scanf("%d",&addIndex);
	if(addIndex<0||addIndex>maxSize){
		printf("khong hop le");
	}
	else if(addIndex>=currentLength){
		array[addIndex]=value;
		currentLength=addIndex+1;
	}else {
		for(int i=currentLength-1;i>=addIndex;i--){
			array[i+1]=array[i];
		}
		array[addIndex]=value;
		currentLength++;
	}
	printf("mang sau khi them la: \n");
	for(int i=0;i<currentLength;i++){
		printf("%d ",array[i]);
		
	}
	
	printf("\nMang hien tai: \n");
	for(int i=0;i<currentLength;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\nNhap vao vi tri can sua: ");
	scanf("%d",&addIndex);
	if(addIndex<0 || addIndex>currentLength)
	{
		printf("Vi tri khong hop le!");
		return 1;
	}
	printf("Nhap vao gia tri moi: ");
	scanf("%d",&value);
	array[addIndex-1]=value;
	printf("Mang sau khi sua: ");
	for(int i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	
return 0;
}
