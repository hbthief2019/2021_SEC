#include <stdio.h>

// f : output n factorial
int f(int n)
{
	// base case
	if(n == 0) 
		return 1;
	else
		return n*f(n-1);
}

// Output the process of Factorial : f 
int tmp(int n)
{
	int i, j, n_cpy = n;
	
	// push stack
	for(i=0; i<=n; i++)
	{
		while(j++ < i) printf("\t");
		printf("->f(%d)\n", n_cpy--);
		j = 0;
	}
	
	n_cpy++;	// n_cpy = 0
	
	// pop stack
	for(i=n; i>=0; i--)
	{
		while(j++ < i) printf("\t");
		printf("<-f(%d)", n_cpy);
		printf(" = %d\n", f(n_cpy++));
		j = 0;
	}
}

// main
int main(void)
{
	tmp(3);
	
	return 0;
}
