#include <stdio.h>
#include <string.h>

void delete_index(char *s,int index){
	int i;
	int len = strlen(s);
	for(i=index;i<len;i++){
		*(s+i)=*(s+i+1);
	}
//	*(s+len-1) = '\0';
}
	

void remove_space(char *s){
	int len = strlen(s);
	int i;
	for(i=0;i<len;i++){
		if((*(s+i) == 0x20) && (*(s+i+1) == 0x20))
		{
			delete_index(s,i+1);
			len--;
			i--;
		}
	}
	puts(s);
}

int main(){
	char s[140];
	printf("nhap string: ");
	gets(s);
	remove_space(s);
	puts(s);
	
	return 0;
	
}
