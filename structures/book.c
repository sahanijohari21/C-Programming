#include<stdio.h>
#include<string.h>
int main(){
   struct book{
   char name[50];
   float price;
   int number;
}a,b,c;
a.number=50;
a.price=200.22;
strcpy(a.name,"Secret Seven");
//a.name=secret;
// a.name[0]='S';
// a.name[1]='E';
// a.name[2]='V';
// a.name[3]='E';
// a.name[4]='N';
printf("%d\n", a.number);
printf("%.2f\n", a.price);
printf("%s\n", a.name);
return 0;
}
