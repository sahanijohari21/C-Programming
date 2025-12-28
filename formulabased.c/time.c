//Program to convert the time in seconds to hours, minutes, and seconds. (1 hr = 3600 sec).
#include<stdio.h>
int main(){
    int tsec,tmin,thr;
    printf("enter the time in second:");
    scanf("%d", &tsec);
    tmin=tsec/60;
    thr=tsec/3600;
    printf("time in second,minutes and hours is %dseconds %dminutes %dhours", tsec, tmin, thr);
    return 0;
}