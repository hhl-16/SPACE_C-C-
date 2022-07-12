#include <stdio.h>
#include <math.h>

int main(){
    float dientich;
    float chuvi;
    float x1,x2,x3,y1,y2,y3;
    float s,p,ab,bc,ac,ct;
    scanf("%f%f%f%f%f%f",&x1,&y2,&x2,&y2,&x3,&y3);
    ab = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    bc = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    ac = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    p = (ab+bc+ac)/2;
    s = sqrt(p*(p-ab)*(p-bc)*(p-ac));
    ct = ab+bc+ac;
    printf("%.2f %f",s,ct);
    return 0;









}