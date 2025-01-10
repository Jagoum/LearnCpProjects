#include <stdio.h>

int main(){
    int Arr0[10], Arr1[36],left_corner0 = 48, rith_corner0=57, left_corner1 = 65, rith_corner1 = 90;
    int i=0;
    while(left_corner0 <= rith_corner0)
    {
        Arr0[i]=left_corner0;
        left_corner0++;
        i++;
    }
    while(left_corner1 <= rith_corner1)
    {
        Arr1[i]=left_corner1;
        left_corner1++;
        i++;
    }
    printf("Elements of Array0 and Array1 are: ");

    for(i =0; i<10;i++){
       printf("%d",Arr0[i]);
    }

    for(int j =0;j<36;j++){
       printf("%c",Arr1[j]);
    }

}