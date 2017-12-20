/*
rotate an array 
i/p : n=5, k=2
o/p : 30 40 50 10 20 
*/
#include <stdio.h>

int main(void) {
	int a[10], n ,k;
	scanf("%d %d", &n, &k);
	for(int i=1, j=0; i<=n; i++, j++)
	a[j] = i*10;
	for(int i=k; i<n; i++)
	printf("%d ", a[i]);
	for(int i=0; i<k; i++)
	printf("%d ", a[i]);
}
