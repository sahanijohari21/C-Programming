#include<stdio.h>
#include<string.h>
int main(){
   typedef struct Book{
   char name[50];
   float price;
   int number;
}Book;
Book a;
Book b;
Book c;
Book d;
a.number=50;
a.price=200.22;
strcpy(a.name,"Secret Seven");
printf("%d\n", a.number);
printf("%.2f\n", a.price);
printf("%s\n", a.name);
return 0;
}
