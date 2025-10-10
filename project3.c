#include<stdio.h>
     int main(){
       int sum,difference,product;
         float quotient;
         int num1,num2;
         printf("enter first number:");
         scanf("%d", &num1);
         printf("enter second numbre:");
         scanf("%d", &num2);
         sum = num1 + num2;
         printf("sum = %d\n", sum);

         difference = num1 - num2;
         printf("difference = %d\n", difference);

         product = num1 * num2;
         printf("product = %d\n", product);

         quotient = (float) num1 / num2;
       printf("quotient = %.2f\n", quotient);
     if (2==0){printf("error:division by 0 is not allowed");}
return 0;
}





