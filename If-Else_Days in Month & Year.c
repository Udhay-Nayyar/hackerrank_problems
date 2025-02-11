#include<stdio.h>
int main(){
    int month,year;
    int flag=1;
scanf("%d",&month);
scanf("%d",&year);
if(year>=1){
    switch(month) {
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    printf("31");
    break;
case 4:
case 6:
case 9:
case 11:
    printf("30");
    break;
case 2:
    if (year>0) {
        if(year%4==0) {
            if(year%100==0) {
                if(year%400==0) {
                    printf("29");
                }
                else {
                    printf("28");
                }
            }
            else {
                printf("29");
            }
        }
        else {
            printf("28");
        }
        break;
        default :
        printf("Invalid Month\n");
    }
}
}
else{
    if(month>12 || month<1)
    printf("Invalid Month\n");
    else{
      printf("Invalid Year\n");
      flag=0;
    }
    if(flag==1)
    printf("Invalid Year\n");
}
    

}
