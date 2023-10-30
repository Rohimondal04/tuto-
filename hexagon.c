#include<stdio.h>
#include<math.h>
int main(){
    float side;
    printf("Enter the side of the hexagon : ");
    scanf("%f",&side);
    float area=(3*sqrt(3)/2)*pow(side,2);
    printf("Area of the hexagon is : %f",area);
    return 0;

}