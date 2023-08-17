// Write a C program to enter length and breadth of a rectangle and find its perimeter & area. //

#include<stdio.h> 
#include<conio.h> 
int main()   
{   
    float length,breadth,perimeter;  
    
    length=5.4;  
    breadth=4.5;  
    
    perimeter = 2*(length+breadth);  
    
    printf("\nPerimeter of Rectangle is : %.2f",perimeter);  
    
    return 0;  
}  