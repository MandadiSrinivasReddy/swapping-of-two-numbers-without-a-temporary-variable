#include<stdio.h>  
int main()    
{    
int a,b;      
printf("enter two numbers"); 
scanf("%d %d",&a,&b);
printf("before swap numbers are %d %d",a,b);    
a=a+b;    
b=a-b;    
a=a-b;   
printf("\nAfter swap numbers are %d %d",a,b);    
return 0;  
}
