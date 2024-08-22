/*
 * Conditional operator programming exercises and solutions in C
 *
 *  Created on: Aug 22, 2024
 *      Author: Hager Khaled
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //*****************1.Write a C program to input two numbers and find maximum between two numbers using conditional/ternary operator **********
       int num1,num2,max;
       printf("Input first number: ");
       scanf("%d",&num1);
       printf("Input secound number: ");
       scanf("%d",&num2);
       max =(num1>num2)?num1:num2;
       printf("Maximum:%d",max);

*/

/*
//*****************2.Write a C program to input three numbers from user and find maximum between three numbers using conditional/ternary operator**************

       int num1,num2,num3,max;
       printf("Input first number: ");
       scanf("%d",&num1);
       printf("Input secound number: ");
       scanf("%d",&num2);
       printf("Input third number: ");
       scanf("%d",&num3);
       max=(num1>num2&&num1>num3)?num1:((num2>num1&&num2>num3)?num2:num3);
       printf("Maximum is %d",max);

       */

/*
//*************3.Write a C program to input a number and check whether number is even or odd using Conditional/Ternary operator *****************
     int num,check;
     printf("input num:");
     scanf("%d",&num);
     check = (num%2==0)?printf("%d is even",num):printf("%d is odd",num);


     */


     /*
//************4.Write a C program to input a year and check whether year is leap year or not using conditional/ternary operator**************8
    int year,check;
    printf("input year :");
    scanf("%d",&year);
    check =((year%4==0)?((year%100==0)?((year%400==0)?printf("%d is leap",year):printf("%d is not leap",year)):printf("%d is leap",year)):printf("%d is not leap",year));
    */



//***************5.Write a C program to input a character and check whether the character is alphabet or not using Conditional/Ternary operator ****************
    char alpha , check;
    printf("Enter any character: ");
    scanf("%c",&alpha);
    check = (alpha>='a' && alpha<='z')?printf("It is ALPHABET"):printf("It is not ALPHABET");
;



    return 0;
}
