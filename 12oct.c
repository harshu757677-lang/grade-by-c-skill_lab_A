#include<stdio.h>
int main () {
float s1, s2 , s3 , s4 , s5 , tot, per;
printf("enter marks of 5 subject out off 100 :");
scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
tot = (s1+s2+s3+s4+s5);
per = tot/5;

printf("percentage= %f \n", per);
if (per>=90)
{ printf("grade A"); }
else if(per>=70)
{ printf("grade B"); }
else if (per>=50)
{ printf("grade C"); }
else if (per>=35)
{ printf("grade D"); }
else {
    printf("fail");
}
return 0;} 