#include<stdio.h>
int main () {
    int arr[7] = {-10, -4 -200 -80, -19, -5, -12};
    int max= INT_MIN;
    int smax= INT_MIN ;
    int i;
    for (i=0; i<7; i++) {
        if (max< arr[i]) {
            max=arr[i];
        }
    }
    for (i=0; i<7; i++) {
        if (arr[i] != max && smax< arr [i]){
            smax = arr[i]; 
        }
    }
    printf("%d", smax);
    return 0;
}