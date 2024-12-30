/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#define Max 100
int thinhphan[Max][Max];
void nhap(int a,int n);
void print(int a,int n);
int main(){
	int a,n;
	printf("moi ban nhap so cot");
	scanf("%d",&a);
	printf("moi ban nhap so hang");
	scanf("%d",&n);
	nhap(a,n);
	print(a,n);
    
	
	return 0;
	
}

void nhap(int a,int n){
for(int i=0;i<a;i++){
	for(int j=0;j<n;j++){
		printf("moi ban nhap phan tu ");
		scanf("%d",&thinhphan[i][j]);
        }
    }
    return;
}
void print(int a,int n){
	for(int i=0;i<a;i++){
		for(int j=0;j<n;j++){
			printf("%d ",thinhphan[i][j]);
		}
		printf("\n");
	}
	return;
}
	
	