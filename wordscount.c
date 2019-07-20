#include<stdio.h>
#include<conio.h>
 main()
{
	char str[100],ch;
	int c=0,l=0;
	
	puts("Enter string");
	gets(str);
	while(str[l]!='\0')
	{
		if(str[l] == ' ')
		{c++;
		}
		l++;
	}
	printf("\n \n no of words = %d ",c+1);
	return 0;
	
}
