// write a program in c to find the area of the triangle using haron's formulae . 

#include<stdio.h>
#include<math.h>
int main(){
    float s,a,b,c,area;
    printf("Enter the value of A,B and C :");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is : %f\n",area);
    return 0 ;
}