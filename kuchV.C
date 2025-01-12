#include <stdio.h>
int main()
{
//>-------------------------------- Printing (kuch V ho sakta hai) in C Program----------------------------------------------->  
 
 printf(" kuch V ho sakta hai;\n");

//>----------- my first calculation in C program ;----------------------------------------------------------------------------->

/*int a,b;
printf(" Enter the frist a Number :\n");
scanf("%d",&a );
printf("Enter second number :");
scanf("%d",&b);
printf("The sum of this two number is %d :" , a-b);
*/

//>--------------C program to calculate area of a rectangle ------------------------------------------------------------------>

/*

int a,b;
printf("Enter the length of rectangle :");
scanf("%d",&a);
printf("Enter tne breadth of the rectangle : ");
scanf("%d",&b);
 int c = a*b;
 printf("the area of th rectangle is : %d",c);

*/

//>--------------------------calculating the area of a Circle and volume of a Cylinder----------------------------------------->
 
 /*
float r,h,pi=3.14;
printf("enter the radius of the circle :");
scanf("%f",&r);
 float c = pi*r*r;
printf("the area of a circle is: %f\n",c); 
printf("Enter the height of the cylinder:");
scanf("%f",&h);
float v = pi*r*r*h;
printf(" the volume of a Cylinder is :%f",v);
*/

//>-----------------------------Convert Celcius to Farenheit-------------------------------------------------------------------->
 
 /*
 float c;
 printf("Enter the Celcius as you felling right now :");
 scanf("%f",&c);
float f = c*9/5+32;
printf("The temperature in Farenheit is : %f",f);
*/

//>------------------------------Calculate Simple INTREST RATE ------------------------------------------------------------------>
 
 /*
 float amount,intrest,time;
  printf("Enter the Amount in $ :");
  scanf("%f",&amount);
  printf("Enter the Intrest rate per year :");
  scanf("%f",&intrest);
  printf("Enter the Loan tearm in year :");
  scanf("%f",&time);
  float calculate = (amount*intrest*time)/100;
  printf("The intrest rate is : %f",calculate);
*/
//printf("%lu",sizeof(int));

//>--------------------------------Simple Calculator------------------------------------------------------------------------------>


int f,s ;
printf("Enter the first Number:");
scanf("%d",&f);
printf("Enter the Second Number :");
scanf("%d",&s);
 int calculate = f%s;
 printf("the sum of this two number is :%d",calculate);


//>------------------------------------calculator--------------------------------------------------------------------------------->



return 0;
 

}








