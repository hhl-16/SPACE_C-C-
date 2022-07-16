#include <stdio.h>
#include <string.h>
int tim_ki_tu(char *s,char *c){
	int index = 0;
	int len_s = 0,len_c = 0;
	int a=1;
	int i=0;	
	int pre=0;
	len_s = strlen(s);
	len_c = strlen(c);
	for(i=0;i<len_s;i++){
		if(c[0] == *(s+i)){
			pre = i;
			break;
		}
		else continue;
	}
	for(i=pre+1;i<len_c;i++){
		if(*(s+i) != c[a]){
			return -1;
		}
		else {
			a++;
		}
	}
	
	return 1;
}



int main(){
	char s[140];
	char c[140];
	printf("nhap string: ");
	gets(s);
	printf("nhap find: ");
	scanf("%s",c);
	printf("%d",tim_ki_tu(s,c));
	
	return 0;
}
