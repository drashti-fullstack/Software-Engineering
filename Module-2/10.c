/*
10. Strings in C
o Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().
*/
#include<stdio.h>
#include<string.h>
int length(char str1[],char str2[])
{

    int i,count=0,j;
    for(i=0;str1[i]!='\0';i++) 
    {
        count++;
    }
    for ( i = 0; str2[i]!='\0'; i++) 
    {
        count++;
    }
    
    return count; 
}
int main()
{
    char str1[100],str2[100];
    printf("\nEnter the string value = "); 
    gets(str1); 
    printf("\nEnter the string value = "); 
    gets(str2); 

    printf("\nOriginal string = %s",str1);  
    printf("\nOriginalstring = %s",str2);  
    int ans = length(str1,str2); 
    printf("\nThe legth is = %d",ans);

    strcat(str1,str2); 
    printf("\nvalue of str1 after using strcat() function = %s",str1);
    printf("\nValue of str2 after using strcat() funcction = %s",str2);
    return 0;
}
