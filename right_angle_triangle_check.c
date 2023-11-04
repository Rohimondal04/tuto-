#include<stdio.h>
#include<math.h>
int main(){
    float hy,b,h,s=0;
    printf("ENTER THE HYPOTENUSE OF THE TRIANGLE:");
    scanf("%f",&hy);
    printf("ENTER THE BASE OF THE TRIANGLE :");
    scanf("%f",&b);
    printf("ENTER THE HEIGHT OF THE TRIANGLE :");
    scanf("%f",&h);
    hy=pow(hy,2);
    b=pow(b,2);
    h=pow(h,2);
    s=b+h;
    if (s==hy){
        printf("It is a right angled triangle ");
    }
    else{
        printf("It is not an right angled triangle ")
    }
    return 0;
}