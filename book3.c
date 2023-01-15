#include<stdio.h>
struct book{
	char title[10];
	float price;
	int page;
};

void main()
{
	struct book b1,b2,b3;
	printf("Enter book name,price,page:");
    scanf("%s %f %d",b1.title,&b1.price,&b1.page);
    printf("Enter 2nd book name,price,page:");
    scanf("%s %f %d",b2.title,&b2.price,&b2.page);
    printf("Enter 3rd book name,price,page:");
    scanf("%s %f %d",b3.title,&b3.price,&b3.page);
    printf("BOOK1: name=%s \nprice=%f \npageno.=%d",b1.title,b1.price,b1.page);
    printf("\nBOOK2: name=%s \nprice=%f \npageno.=%d",b2.title,b2.price,b2.page);
    printf("\nBOOK3: name=%s \nprice=%f \npageno.=%d",b3.title,b3.price,b3.page);
}