#include <stdio.h>

int main(){
	int a=0, b=0;
	
	/*prefix*/
	printf("input two integer:  ") ;
	scanf("%d %d", &a, &b);
	
	printf("%d / %d is %d with a remainder of %d\n", a, b, a/b, a%b);
	return 0;
}