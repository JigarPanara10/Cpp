// Write a C program to input elements in array and print all negative elements //

#include <stdio.h>
 #include <conio.h>

 
int main()
{
    int a[100],i,size;
   
    printf("Enter size of the array : ");
    scanf("%d",&size);
 
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("\nAll negative elements in array are : ");
    for(i=0; i<size; i++)
    {
         
        if(a[i] < 0)
        {
            printf("%d\t", a[i]);
        }
    }
 
    return 0;
}