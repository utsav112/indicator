#include<stdio.h>

main()
{
    int a[100],i,n;  
    int *ptr;


    printf("Enter the size of values = ");  
    scanf("%d",&n);

    for(i = 0; i < n; i++)
	{
    	printf("a[%d] = ",i);
    	scanf("%d", &a[i]);  
	}

    ptr = &a[n - 1];
    printf("\nElements of array in reverse order ...\n");  
    for(i = 0; i < n; i++) 
	 {
    	printf("%d\n", *(ptr-i));  
	}

}
