#include <stdio.h>
int main()
{
    int n1, n2, Sum;
    
    printf("Enter two integers: ");

    // two integers entered by user are stored using scanf()
    scanf("%d %d", &n1, &n2);

    // store sum in variable Sum
    Sum = n1 + n2;

    // display output 
		if(n1<=n2)
		{
			printf("\n%d + %d = %d\n", n1, n2, Sum);
		}
		else if(n1>n2)
		{
			printf("\n%d + %d = %d\n", n2, n1, Sum);
		}
    
    // check if the sum is even or odd, 
    // and print result to screen
    if(Sum % 2 == 0) printf("\n%d is even\n", Sum);
    else printf("\n%d is odd\n", Sum);

    return 0;
}