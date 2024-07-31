#include <stdio.h>
#include <math.h>

#define pi 3.14159265358979323846
int main  (){

  int Operation;
  double a;
  double b;
  double result;

   while(1){  //Menu display
  
   printf("\nWellcome to calculator\n");
   printf("1. Addition\n");
   printf("2. Subtraction\n");
   printf("3. Multiplication\n");
   printf("4. Division\n");
   printf("5. Modulus\n");
   printf("6. Power\n");
   printf("7. Square Root\n");
   printf("8. Sine\n");
   printf("9. Cosine\n");
   printf("10. Tangent\n");
   printf("11. Exit\n");

   printf("Enter Which Operation You Want To Perform: "); 
   if (scanf("%d", &Operation) != 1) {

   printf("(Error)Please enter a number.\n");
      
    while (getchar() != '\n');
    continue;
   }

   if(Operation==11){
    printf("Exited\n");
    break;
   }
   if(Operation<1 && Operation>11){
   continue;
   } 


  switch(Operation) {
  

   case 1: //add                       
    printf("Enter a number a: ");
    scanf("%lf",&a);

    printf("Enter a number b: ");
    scanf("%lf",&b);
    
    result=a+b;
    printf("Result of operation is :%.2lf",result);
    break;
  
  
   case 2://substract
    printf("Enter a number a: ");
    scanf("%lf",&a);

    printf("Enter a number b: ");
    scanf("%lf",&b);

    result=a-b;
    printf("Result of operation is :%.2lf\n",result);
    break;
  

   case 3://Multiplication
    printf("Enter a number a: ");
    scanf("%lf",&a);

    printf("Enter a number b: ");
    scanf("%lf",&b);

    result=a*b;
    printf("Result of operation is :%.2lf\n",result);
    break;
   

   case 4://Division
    printf("Enter a number a: ");
    scanf("%lf",&a);

    printf("Enter a number b: ");
    scanf("%lf",&b);

    if (b != 0) {
     result=a/b;
     printf("Result of operation is :%.2lf\n",result);

    }else{
     printf("Can't divide by zero)\n");
    }
    break;   

   
   case 5://modulus
    printf("Enter a number a: ");
    scanf("%lf",&a);

    printf("Enter a number b: ");
    scanf("%lf",&b);

    if (b != 0) {
    result=(int)a % (int)b;
    printf("Result of operation is :%.2lf\n",result);

    }else{
     printf("Can't divide by zero)\n");
    }
    break;

   
   case 6://Power
    printf("Enter the base: ");
    scanf("%lf",&a);

    printf("Enter the power: ");
    scanf("%lf",&b);

    result=pow(a,b);
    printf("Result of operation is :%.2lf\n",result);
    
    break;   

    
   case 7://square root 
   printf("Enter the number: ");
   scanf(" %lf",&a);

   if(a>0){
   result = sqrt (a);
   printf("Result of operation is : %f\n",result);
   }else{
    printf("Erorr:Cannot compute the square root of a negative number\n");
   }
    break;
  
   
   case 8://sin
   printf("Enter the angle in degrees(0-360): ");
   scanf("%lf",&a);
   
   if(a>0 && a<360){
   result= sin(a * (pi / 180.0));  //degrees to radians
   printf("Result of operation is : %lf\n",result);
  
   }else{
    printf("Angle out of range\n");
   }
   break;
   

   case 9://cos
   printf("Enter the angle in degrees(0-360): ");
   scanf("%lf",&a);
  
   if(a>0 && a<360){
   result= cos(a * (pi / 180.0));  //degrees to radians
   printf("Result of operation is : %lf\n",result);

   }else{
   printf("Angle out of range\n");
   }
   break;

   case 10://tan
   printf("Enter the angle in degrees(0-360): ");
   scanf("%lf",&a);
   
   if(a>0 && a<360){
   result= tan(a * (pi / 180.0));  //degrees to radians
   printf("Result of operation is : %lf\n",result);
   }else{
   printf("Angle out of range\n");
   }
   break;
   
 
 
   default:
   printf("Invalid operation");
  
  }

 }
  

}