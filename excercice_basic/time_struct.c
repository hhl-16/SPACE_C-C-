#include <stdio.h>
#include <string.h>

typedef struct{
	int h,m,s;	
	
}time, *ptime;

void nhaptime(time *inputtime);
void xuattime(time outputtime);
time stime(time stime1,time stime2);


int main(){
	time s1,s2;
	nhaptime(&s1);
	xuattime(s1);
	nhaptime(&s2);
	xuattime(s2);
	printf("%d:%d:%d",stime(s1,s2).h,stime(s1,s2).m,stime(s1,s2).s);
	
	
	
	return 0;
}
void nhaptime(time *inputtime){
	printf("nhap h: ");
	scanf("%d",&inputtime->h);
	printf("\nnhap minutes: ");
	scanf("%d",&inputtime->m);
	printf("\nnhap second: ");
	scanf("%d",&inputtime->s);
	printf("\n");
}
void xuattime(time outputtime){
	printf("hh:mm:ss %d:%d:%d\n",outputtime.h,outputtime.m,outputtime.s);
}
time stime(time stime1,time stime2){
	time kq;
	kq.h = stime2.h - stime1.h;
	kq.m = stime2.m - stime1.m;
	kq.s = stime2.s - stime1.s;
	return kq;
}

