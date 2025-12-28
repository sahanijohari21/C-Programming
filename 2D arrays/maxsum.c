 #include<stdio.h>
 #include<limits.h>
 int main (){
 int arr [3][3]= {1,2,3,4,5,6,7,8,9};
 int maxsum = INT_MIN, maxrow= -1;
 for (int i=0; i<3; i++){
    int sum = 0;
    for(int j=0; j<3; j++){
        sum += arr[i][j];
    }
    if (sum > maxsum) {
        maxsum = sum;
        maxrow = i;
    }
 }
 printf("row %d has the maximum sum = %d\n", maxrow+1, maxsum);
return 0;
}