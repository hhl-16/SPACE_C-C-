#include <stdio.h>
#include <math.h>

typedef struct{
	float a;
	float b;
}sophuc;

sophuc cong(sophuc,sophuc);
sophuc tru(sophuc,sophuc);
sophuc nhan(sophuc,sophuc);
sophuc chia(sophuc,sophuc);
void nhap(sophuc *s1);
void xuat(sophuc s1);

int main(){
	sophuc s1,s2;
	int menu;
	char a;
	nhap(&s1);
	nhap(&s2);
	xuat(s1);
	xuat(s2);
	
	do{
		printf("menu: \n");
		printf("1. cong so phuc\n");
		printf("2. tru so phuc\n");
		printf("3. nhan so phuc\n");
		printf("4. chia so phuc\n");
		printf("select: ");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				xuat(cong(s1,s2));
				break;
			case 2:
				xuat(tru(s1,s2));
				break;
			case 3:
				xuat(nhan(s1,s2));
				break;
			case 4:
				xuat(chia(s1,s2));
				break;
		}
		fflush(stdin);
		printf("continues: ");
		scanf("%c",&a);		
	}while(a != 'n')	;
	
	return 0;
}
sophuc cong(sophuc s1, sophuc s2){
	sophuc kq;
	kq.a = s1.a + s2.a;
	kq.b = s1.b + s2.b;
	return kq;
}
sophuc tru(sophuc s1, sophuc s2){
	sophuc kq;
	kq.a = s2.a - s1.a;
	kq.b = s2.b - s1.b;
	return kq;
}
sophuc nhan(sophuc s1, sophuc s2){
	sophuc kq;
	kq.a = s1.a * s2.a;
	kq.b = s1.b * s2.b;
	return kq;
}
sophuc chia(sophuc s1, sophuc s2){
	sophuc kq;
	kq.a = s1.a + s2.a;
	kq.b = s1.b + s2.b;
	return kq;
}
void nhap(sophuc *s1){
	printf("nhap phan thuc: ");
	scanf("%f",&s1->a);
	printf("nhap phan ao: ");
	scanf("%f",&s1->b);
}
void xuat(sophuc s1){
	printf("so phuc: %.2f %.2fi\n",s1.a,s1.b);
}

