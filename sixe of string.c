#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    puts("Enter a string");
    scanf("%[^\n]s",str);
    puts("The size of string is");
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
        
 
    }
    printf("%d",size);
    return 0;
    
}
