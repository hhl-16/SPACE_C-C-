#include <stdio.h>
#include <string.h>



int main(){
	char source[140];
	char des[34];		
	int index_s = 0;
	int index_c = 0;
	int len_c;
	int count = 0;
	printf("nhap string source: ");
	gets(source);
	printf("\n");
	printf("nhap string: ");
	scanf("%s",&des);	
	puts(source);
	puts(des);
	len_c = strlen(des);
	
	while(source[index_s] != '\0'){
		if(des[index_c] == source[index_s]){
			while((des[index_c] == source[index_s])&&source[index_s]!='\0'){
				index_c++;
				index_s++;
			}
			if(index_c == len_c){
				count ++;
			}
			
		}
		else {
			index_s ++;
		}
		
		index_s++;
		index_c=0;	
	}
	printf("\n%d",count);
	
	
	
	
	
	return 0;
	
}
