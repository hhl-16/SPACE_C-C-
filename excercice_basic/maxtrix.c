#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int s[40][40];
	int c,r;
	int i,j;
	printf("nhap c: ");
	scanf("%d",&c);
	printf("nhap r: ");
	scanf("%d",&r);
	
	for(i=0;i<=r;i++){
		for(j=0;j<=c;j++){
			printf("nhap s[%d][%d]: ",i,j);
			scanf("%d",&s[i][j]);			
		}
	}
	
	for(i=0;i<=r;i++){
		for(j=0;j<=c;j++){
			printf("%5d",s[i][j]);						
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	return 0;
}
