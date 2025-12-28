#include<stdio.h>
#include<math.h>
int main(){
    int cost_price,slab;
    float discount, discounted_price;
    printf("enter the cost price:");    
    scanf("%d", &cost_price);
    if(cost price>=800);
    slab=1;
    else if(cost_price>=500 && cost price<800);
    slab=2;
    else if(cost_price<500);
    slab=3;
    switch(slab){
        case 1:
            discount= 0.25*cost_price;
            discounted_price= cost price - discount;
            printf("The discounted price is %.2f", discounted_price);
            break;
        case 2:
            discount= 0.2*cost_price;
            discounted_price= cost price - discount;
            printf("The discounted price is %.2f", discounted_price);
            break;
        case 3:
            printf("No discount applicable");
            break;
    }
    return 0;
}