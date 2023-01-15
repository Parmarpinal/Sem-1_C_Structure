#include<stdio.h>
struct book{
	char title[10];
	int price;
	char author[10];
	char pub[10];
};

void main()
{
    struct book b1;
    printf("Enter book title,author name,publication and price:");
    scanf("%s %s %s %d",b1.title,b1.author,b1.pub,&b1.price);
    printf("\nBook title=%s",b1.title);
    printf("\nAuthor name=%s",b1.author);
    printf("\nPublished by=%s",b1.pub);
    printf("\nBook price=%d",b1.price);
}