#include<stdio.h>
int main()
{
    int i;
    char ch='a';
    do
    {
    printf("%c,",ch);    
    ch=ch+4;
    } 
    while(ch<='z');
    
}
