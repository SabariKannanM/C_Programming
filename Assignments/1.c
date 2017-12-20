/*
swap all even & odd characters in string
*/
#include <stdio.h>

int main(void) {
	char word[50];
	gets(word);
	int l,i,j;
	//printf("%s\n", word);
	l = strlen(word);
	l = l%2==0 ? l : l+1;
	//printf("%d\n", l);
	for(i=0, j=1; i<=l, j<=l-1; i+=2, j+=2)
	printf("%c%c", word[j], word[i]);
	return 0;
}
