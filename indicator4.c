#include<stdio.h>

main()

{
	int ch[100];
	int *p;

	int i,n;
	printf("Enter string = ");
	gets(ch);

	p = &ch;

	printf("String Length  = %d", strlen(p));
}
