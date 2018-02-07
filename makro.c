#include <stdio.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))


int main ()
{
	const int liczba1 = 1000;
	const int liczba2 = 2;
	
	printf("%d\n", MAX(liczba1, liczba2));
	
	return 0;
}
