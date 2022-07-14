#include <stdio.h>

void reserstring(char *s){
	int n;
	char reser_s[140];
	int i=0,index=0;
	puts(s);
	
	for(i=0;;i++){
		if(*(s+i) == NULL)
		{
			index = i;
			break;
		}
	}
	printf("\n%d",index);
	n=index;
	for(i=0;i<=index;i++){
		n--;
		reser_s[n]=*(s+i);
			
	}
	printf("\n");
	puts(reser_s);	
}

int main(){
	char s[140];
	printf("nhap mang: ");
	gets(s);
	reserstring(s);
	
	
	
	
	
	return 0;
}
