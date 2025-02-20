#include <stdio.h>

int main() {
    int age , income , tolerance;
    scanf("%d",&age);
    scanf("%d",&income);
    scanf("%d",&tolerance);

    if((age<30) || ((age>=30 && age<=50)&&(income>75000)&&(tolerance==3)) || (age>50 && tolerance==3 && income>75000)){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if(age>50 && (income<=75000 || income>75000) && (tolerance==1 || tolerance==2) || (income<=30000) && (tolerance==1 || tolerance==2) ){
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    else if(((age>=30 && age<=50)&&(income<=75000)&&(tolerance==2)) || ((age>=30 && age<=50)&&(income>75000)&&(tolerance==2)) || (tolerance==1)){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    
    return 0;
}