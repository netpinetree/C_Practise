#include <stdio.h> 
#include <string.h> 
void fun(char *s, char t[]) 
{ 
	int i,j=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]%2!=0) t[j++]=s[i];
	}
	t[j]='\0';
} 
main() 
{ 
char s[100], t[100]; 
printf("\nPlease enter string S:"); scanf("%s", s); 
fun(s, t); 
printf("\nThe result is: %s\n", t); 

} 
