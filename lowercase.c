#include <stdio.h>   
#include <string.h>  
  
int upr_lwr (char *str)  
{  
  static int i = 0;  
    if (str[i])  
    {  
        if ( str[i] >= 65 && str[i] <= 90)  
        str[i] = str[i] + 32;   
        i++;  
        upr_lwr(str);   
    }  
}  
int main ()  
{  
    char str[100];   
    printf (" Enter the upper case string: ");  
    gets (str);  
    upr_lwr (str);  
    printf (" \n The lowercase string is: %s", str);  
}  
