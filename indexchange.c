#include <stdio.h>  
#include <string.h>  
int main ()  
{  
char str[30];  
int i,n;  
printf (" Enter the string: ");  
scanf (" %s", str);   
printf (" Enter the index: ");  
scanf (" %d", &n); 
      
    if(str[n]>=65 && str[n]<=90){
        str[n]=str[n]+32;
    }  
    else if(str[n]>=97 && str[n]<=122)
    {
        str[n]=str[n]-32;
    }

printf("the string is %s",str);

return 0;  
} 
