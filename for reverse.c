#include <stdio.h>  
#include <string.h>  
void main()  
{  
    char str[50], temp;   
    int i, m,n, len;  
    printf (" \n Enter a string to reverse order: ");  
    scanf( "%s",str);  
    len = strlen(str);   
    m = 0; 
    n = len - 1;   
    for (i = m; i <n; i++)  
    {  
        temp = str[i];  
        str[i] = str[n];  
        str[n] = temp;  
        n--;  
    }  
    printf (" The reverse of the original string is: %s ",  str);  
      
}
