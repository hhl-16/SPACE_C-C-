#include <stdio.h>
#include <string.h>
#define MAX 140

int demkitu(char *s){
	int count = 0,i=0;
	int kq=0;
	
	count = strlen(s);
	for(i=0;i<count;i++){
		if(*(s+i) == 0x20){
			kq++;
		}
	}
	kq++;
	return kq;
}
int main(){
	char s[MAX];
	printf("nhap nhap string: ");
	gets(s);
	printf("\ndemki tu: %d",demkitu(s));
	
	
	return 0;
}
