#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
char str[30];  
int i;  
printf (" Enter the string: ");  
scanf (" %s", &str);   
      
 
 for ( i = 0; i <= strlen (str); i++)  
 {  
  
 if (str[i] >=97  && str[i] <= 123)  
 str[i] = str[i] - 32 ; 
 }  
printf (" \n Upper Case to Lower case string is: %s", str);  
return 0;  
} 
