#include <stdio.h>  
#include <string.h>  
int main ()  
{  
char str1[30],str2[30];  
int i;  
printf (" Enter the first string: ");  
scanf (" %s", str1);   
printf (" Enter the second string: ");  
scanf (" %s", str1); 
      
if(strlen(str1)>strlen(str2)){
    printf("String 1 is largest");
}
else{
    printf("String 2 is largest");
}
return 0;  
} 
