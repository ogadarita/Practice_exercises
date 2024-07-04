#include "main.h"

int main(){
	struct node *head = NULL;
	head = (struct node *)malloc(sizeof(struct node));

	head->data = 45;
	head->link = NULL;

	printf("%d", head->data);
	return (0);
}
