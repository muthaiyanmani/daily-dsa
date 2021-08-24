#include<stdio.h>

int main(){
    double a,b,c,discriminent,root1,root2,realPart,imgPart;

    printf("Enter co-efficients of a,b,c : ");
    scanf("%lf %lf %lf",&a,&b,&c);

    // discriminent  = b^2 - 4 a c
    discriminent = b*b - 4 * a * c;
    if(discriminent>0){
        root1 = ((-b) + (discriminent*0.5))/(2*a);
        root2 = ((-b) - (discriminent*0.5))/(2*a);
        printf("The roots are %.2lf and %.2lf",root1,root2);

    }else if(discriminent=0){
        root1= -b / 2*a;
        printf("The root is %.2lf ",root1);

    }else{
        realPart = -b/(2*a);
        imgPart = (-discriminent)*0.5/(2*a);
        printf("The roots are %.2lf+%.2lfi and %.2f-%.2fi ",realPart,imgPart,realPart,imgPart);
    }

    return 0;
}