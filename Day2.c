#include<stdio.h>
#include<math.h>
int main(){
    double mealCost;
    float totalCost=0;
    int tipPercent,taxPercent;
    scanf("%lf",&mealCost);
    scanf("%d",&tipPercent);
    scanf("%d",&taxPercent);
    float tip=mealCost*tipPercent/100;
    float tax=mealCost*taxPercent/100;
    totalCost=mealCost+tip+tax;
    printf("%d",(int)round(totalCost));
}


















