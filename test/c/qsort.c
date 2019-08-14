#include <stdio.h>
#include <stdlib.h>


void parray( int* a, int c) {
	int i;
	for (i=0; i<c; ++i)
		printf("%d ", a[i]);

	printf("\n");
}

static int cmp(const void *p1, const void *p2) {
	return *((int *) p1) < *((int *) p2);
}

int main( void ) {

	int num[10]={3,5,2,1,8,4,7,9,0,6};
	parray(num,10);

	qsort(&num[0], 10, sizeof(int), cmp);

	parray(num,10);


	return 0;
}
