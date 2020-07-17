#include <stdio.h>

int main(){
	int price=0;
	
	printf("Price : ") ;
	scanf("%d", &price);
	printf("----------------output---------------\n");
	printf("Month\t\t: \t3\t6\n");
	int price2 = price + 0.05*price;
	price2 = price2 + 0.05*price2;
	price2 = price2 + 0.05*price2;
	printf("Payment\t\t: \t%d\t%d\n", price, price2);
	
	printf("-------------------------------------\n");
	printf("Payment/month\t: \t%.2f\t%.2f\n", (float)price/3, (float)price2/6);
	
	return 0;
}