#include <stdio.h>
#include <string.h>

int checkdx(char *s){
	int len = strlen(s);
	int i;
	int a = len/2;
	for(i=0;i<a;i++){
		if(*(s+i) != *(s+len-i-1)){
			return 0;
		}
	}
	return 1;
}
int main(){
	char s[140];
	printf("nhap string: ");
	gets(s);
	printf("\n%d",checkdx(s));
	
}
