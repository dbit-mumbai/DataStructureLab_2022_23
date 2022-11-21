
#include <stdio.h>

void insert ();
void traverse ();
void search ();
void delete ();

void main ()
{
	int num1,i,a[20];
	int ch;

while(1)
{
printf("\n----Array Operation---");
printf("\n1. INSERT an element into the Array");
printf("\n2. DELETE an element from the Array");
printf("\n3. TRAVERSE the Array elements");
printf("\n4. SEARCH Array element");
printf("\n5. EXIT");

printf("\n Enter your choice:");
scanf("%d",&ch);

switch(ch)
{
	case 1: printf("\n Enter the element to be insterted into the Array:");
			scanf("%d",&num1);
			insert(num1);
			break;

	case 2: delete();
			//getch();
			break;

	case 3:	traverse();
			//getch();
			break;
	case 4: search();
			//getch();
			break;
	case 5: exit(1);
			//getch();
			break;

	default: 	printf("\n Wrong Choice");
				break;
} 	//end of switch

} //end of while
}

void insert(int num1)
{
	int i,a[20];
	for(i=1;i<21;i++);
	    a[i]=num1;
}
