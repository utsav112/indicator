#include<stdio.h>

main()

{

    int a[100];
    int i,n;
    int *p;
    p = &a;

    printf("Enter the value of size = ");
    scanf("%d",&n);    

    for (i =0; i < n; i++)
	{
    	printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}


    for (i = 0; i < n ; i++)
	{

    	printf("%d ", *(p+i));
	}


}
