#include <stdio.h>

int main(){
	int a=0;
	
	/*prefix*/
	printf("input a: ") ;
	scanf("%d", &a);
	printf("a = %d\n", a);
	a++;
	printf("a = a + 1; a = %d\n", a);
	a++;
	printf("a = a + 1; a = %d\n", a);
	a--;
	printf("a = a - 1; a = %d\n", a);
	
	/*postfix*/
	printf("input a: ") ;
	scanf("%d", &a);
	printf("a = %d\n", a);
	a++;
	printf("a = a + 1; a = %d\n", a);
	a++;
	printf("a = a + 1; a = %d\n", a);
	a--;
	printf("a = a - 1; a = %d\n", a);
	return 0;
}