/*
	NAME	      : SRAINA PANCHANGAM
	ROLL NO.      : 43
	PROGRAM NAME  : SINGLE LINKED LIST
*/

//Operations performed on single linked lists - Create,Insert,Delete,Display,Search,Count,Copy,Concatenate,Split and Reverse.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next; //self referential
};

//Function Prototype
struct node* Create ();
void InsertBeg ();
void InsertLoc ();
void InsertEnd ();
void DelBeg ();
void DelLoc ();
void DelEnd ();
void Display ();
void Search ();
int Count ();
void Copy ();
void Concat ();
void Split ();
void Reverse ();

struct node *start = NULL, *s1 = NULL, *s2 = NULL;
int ncount;  //Global variable

struct node* getnode()  //Dynamic memory allocation
{
	return((struct node*) malloc(sizeof(struct node)));
}

void freenode(struct node *p)
{
	free(p);  //Memory released
}

void main()
{
	char c;  //To continue

	do
	{
		int ch;

		printf("\nThe new list is: ");
		Display();

		printf("\n\n--------SINGLE LINKED LIST--------");
		printf("\n\n 1. CREATE");
		printf("\n 2. INSERT AT THE BEGINNING");
		printf("\n 3. INSERT AT A LOCATION");
		printf("\n 4. INSERT AT THE END");
		printf("\n 5. DELETE AT THE BEGINNING");
		printf("\n 6. DELETE AT A LOCATION");
		printf("\n 7. DELETE AT THE END");
		printf("\n 8. DISPLAY");
		printf("\n 9. SEARCH");
		printf("\n10. COUNT");
		printf("\n11. COPY");
		printf("\n12. CONCATENATE");
		printf("\n13. SPLIT");
		printf("\n14. REVERSE");

		printf("\n\nEnter your choice:  ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
			{
				printf("\n\n\t\tCREATE\t");
				s1 = Create();  //Function call
			}
			break;

			case 2:
			{
				printf("\n\n\t\tINSERT - BEGINNING\t");
				InsertBeg ();  //Function call
			}
			break;

			case 3:
			{
				printf("\n\n\t\tINSERT - LOCATION\t");
				InsertLoc (); //Function call
			}
			break;

			case 4:
			{
				printf("\n\n\t\tINSERT - END\t");
				InsertEnd (); //Function call
			}
			break;

			case 5:
			{
				printf("\n\n\t\tDELETE - BEGINNING\t");
				DelBeg (); //Function call
			}
			break;

			case 6:
			{
				printf("\n\n\t\tDELETE - LOCATION\t");
				DelLoc (); //Function call
			}
			break;

			case 7:
			{
				printf("\n\n\t\tDELETE - END\t");
				DelEnd ();  //Function call
			}
			break;

			case 8:
			{
				printf("\n\n\t\tDISPLAY\t");
				Display ();  //Function call
			}
			break;

			case 9:
			{
				printf("\n\n\t\tSEARCH\t");
				Search ();  //Function call
			}
			break;

			case 10:
			{
				printf("\n\n\t\tCOUNT\t");
				ncount = Count ();  //Function call
				printf("\nNumber of elements in the list = %d", ncount);
			}
			break;

			case 11:
			{
				printf("\n\n\t\tCOPY\t");
				Copy ();  //Function call
			}
			break;

			case 12:
			{
				printf("\n\n\t\tCONCATENATE\t");
				Concat ();  //Function call
			}
			break;

			case 13:
			{
				printf("\n\n\t\tSPLIT\t");
				Split ();  //Function call
			}
			break;

			case 14:
			{
				printf("\n\n\t\tREVERSE\t");
				Reverse ();  //Function call
			}
			break;

			default:
				printf("\n\n\t\tINVALID INPUT\n");
		}

		fflush(stdin);

		printf("\n\nDo you want to continue (Y/N) ?  ");
		scanf(" %c", &c);

	}while((c=='y')||(c=='Y'));

	return(0);
}



//F1: Create Function
struct node* Create()
{
	struct node *temp, *newnode;
	int i,n,x;

	do
	{
		printf("\n\nEnter number of elements:  ");
		scanf("%d", &n);
	}while(n<0);

	if(n!=0)
	{
		printf("\nEnter values: \n");
		for(i=1;i<=n;i++)
		{
			scanf("%d", &x);

			newnode = getnode();
			newnode->data = x;

			if(i==1)
			{
				start = newnode;
				temp = newnode;
			}
			else
			{
				temp->next = newnode;
				temp = temp->next;
			}

			newnode->next = NULL;
		}
		printf("\nList of %d elements created successfully.\n", n);
	}

	else
	{
		start = NULL;
		temp = start;
		printf("\nNo list created.\n");
	}

	return(start);
}



//F2: Insert at beginning Function
void InsertBeg()
{
	struct node *newnode;
	int x;

	printf("\n\nEnter value to be entered:  ");
	scanf("%d", &x);

	newnode = getnode();
	newnode->data=x;
	newnode->next = start;
	start=newnode;

	printf("\nNew element %d is inserted successfully at the beginning of the list.\n", x);
	Display();
}



//F3: Insert at a location Function
void InsertLoc()
{
	struct node *temp, *newnode;
	int i,x,p;

	do
	{
		printf("\n\nEnter location:  ");
		scanf("%d", &p);
	}while(p<=0);

	temp=start;

	if((temp==NULL)&&(p!=1))
		printf("\nList is empty and hence INVALID LOCATION.\n");

	else if(p==1)
			InsertBeg();

	else
	{
		printf("\nEnter value to be inserted:  ");
		scanf("%d", &x);

		for(i=1;i<p-1;i++) //p-2 jumps
		{
			if(temp->next == NULL)
			{
				printf("\nInvalid Location as Location > Length of list.\n");
				break;
			}

			temp = temp->next;
		}

		if(i == p-1)
		{
			newnode = getnode();
			newnode->data=x;
			newnode->next = temp->next;
			temp->next = newnode;

			printf("\nNew element %d is inserted successfully at location %d.\n", x, p);
			Display();
		}
	}
}



//F4: Insert at the end Function
void InsertEnd()
{
	struct node *temp, *newnode;
	int x;

	temp=start;

	if(temp==NULL)
		printf("\nThe list is empty.\n");
	else
	{
		printf("\n\nEnter value to be entered:  ");
		scanf("%d", &x);

		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		newnode = getnode();
		newnode->data=x;
		temp->next = newnode;
		newnode->next = NULL;

		printf("\nNew element %d is inserted successfully at the end.\n", x);
		Display();
	}
}



//F5: Delete at beginning Function
void DelBeg()
{
	int x;
	struct node *temp;

	temp = start;

	if(temp == NULL)
		printf("\nList is empty.\n");

	else
	{
		x = temp->data;
		start = temp->next;

		freenode(temp);

		printf("\nfirst element %d is deleted successfully.\n", x);
		Display();
	}
}



//F6: Delete at a location Function
void DelLoc()
{
	int x,p,i, cnt;
	struct node *temp, *ptr;

	temp = start;
	cnt = Count();

	if(temp == NULL)
		printf("\nList is empty.\n");

	else
	{
		do
		{
			printf("\n\nEnter location:  ");
			scanf("%d", &p);
		}while(p<=0);

		if(p==1)
			DelBeg();

		else if((cnt == 1)&&(p == 1))
			DelBeg();

		else if((cnt == 1)&&(p != 1))
			printf("\nOnly one element is present in the list.Hence 'INVALID LOCATION'.\n");

		else
		{
			for(i=1;i<p-1;i++)  //p-2 jumps
			{
				if(temp->next->next == NULL)
				{
					printf("\nInvalid location as Location > length.\n");
					break;
				}

				temp = temp->next;
			}

			if(i==p-1)
			{
				x = (temp->next)->data;

				ptr = temp->next;

				temp->next = (temp->next)->next;

				freenode(ptr);

				printf("\nElement %d at location %d deleted successfully.\n", x, p);
				Display();
			}
		}
	}
}



//F7: Delete at the end
void DelEnd()
{
	int x;
	struct node *temp, *ptr;

	temp = start;

	if(temp == NULL)
		printf("\nList is empty.\n");

	else
	{
		while((temp->next)->next != NULL)
		{
			temp = temp->next;
		}

		ptr = temp->next;

		if(ptr != NULL)
		{
			x = ptr->data;

			freenode(ptr);

			temp->next = NULL;

			printf("\nLast element %d is deleted successfully.\n", x);
			Display();
		}
		else
			DelBeg();
	}
}



//F8: Display Function
void Display()
{
	struct node *temp;

	temp=start;

	if(temp==NULL)
		printf("\nThe list is empty.\n");
	else
	{
		printf("\nThe list elements are: ");

		while(temp != NULL)
		{
			printf("\n%d",temp->data);
			temp = temp->next;
		}
	}
}



//F9: Search Function
void Search()
{
	int x,loc=0;
	struct node *temp;

	temp=start;

	if(temp==NULL)
		printf("\nThe list is empty.\n");
	else
	{
		printf("\n\nEnter element to be searched:  ");
		scanf("%d", &x);

		while(temp != NULL)
		{
			loc++;

			if(temp->data == x)
			{
				printf("\nElement %d found at %d location.\n", x, loc);
				break;
			}

			temp = temp->next;
		}

		if(temp == NULL)
			printf("\nElement not found.");
	}
}



//F10: Count Function
int Count()
{
	int count=0;
	struct node *temp;

	temp=start;

	if(temp==NULL)
		printf("\nThe list is empty.\n");
	else
	{
		while(temp != NULL)
		{
			count++;
			temp = temp->next;
		}
	}

	return(count);
}



//F11: Copy Function
void Copy()
{
	struct node *temp, *newnode, *start2 = NULL, *temp2;

	temp = start;
	temp2 = start2;

	if(temp==NULL)
		printf("\nThe list is empty.\n");
	else
	{
		newnode = getnode();
		start2 = newnode;
		temp2 = newnode;

		while(temp != NULL)
		{
			temp2->data = temp->data;

			if(temp->next != NULL)
			{
				newnode = getnode();

				temp2->next = newnode;

				temp = temp->next;
				temp2 = temp2->next;
			}
			else
			{
				temp2->next = NULL;
				temp = temp->next;
			}

		}

		temp2 = start2;

		printf("\nThe list after copying is: ");

		while(temp2 != NULL)
		{
			printf("\n%d", temp2->data);
			temp2 = temp2->next;
		}
	}
}



//F12: Concatenate Function
void Concat()
{
	struct node *temp;

	s1 = start;
	temp=s1;

	printf("\nThe first list is: ");
	Display();

	printf("\n\nEnter elements of the second list: ");
	s2 = Create();

	start = s1;

	if((s1 == NULL)&&(s2 == NULL))
	{
		printf("\nThe list after merging is: \n");
		printf("\nList is empty.\n");
	}

	else if(s2 == NULL)
	{
		printf("\nSince the second list is empty.The list after concatenation remains same.\n");
		Display();
	}

	else
	{
		while(temp->next != NULL)
			temp = temp->next;

		temp->next = s2;

		printf("\nThe list after merging is: ");

		temp=s1;

		if(temp == NULL)
			temp = s2;

		while(temp != NULL)
		{
			printf("\n%d", temp->data);
			temp = temp->next;
		}
	}
}



//F13: Split Function
void Split()
{
	int m,n,i;
	struct node *temp, *start2=NULL, *temp2, *start3=NULL, *temp3, *newnode;

	temp = start;
	temp2 = start2;
	temp3 = start3;

	if(temp==NULL)
		printf("\nThe list is empty.\n");

	else
	{
		ncount = Count();

		if(ncount != 1)
		{
			printf("\nThe list is of %d elements.\n", ncount);

			do
			{
				printf("\nEnter number of elements in the First half?  ");
				scanf("%d", &m);
				printf("\nEnter number of elements in the Second half?  ");
				scanf("%d", &n);
			}while((m<0)||(n<0));


			if((m+n) == ncount)
			{
				for(i=1;i<=m;i++)
				{
					if(i==1)
					{
						newnode = getnode();
						start2 = newnode;
						temp2 = newnode;
					}

					temp2->data = temp->data;

					if(i == m)
						temp2->next = NULL;
					else
					{
						newnode = getnode();

						temp2->next = newnode;
						temp2 = temp2->next;
					}
					temp = temp->next;
				}

				for(i=m+1;i<=ncount;i++)
				{

					if(i==(m+1))
					{
						newnode = getnode();
						start3 = newnode;
						temp3 = newnode;
					}

					temp3->data = temp->data;

					if(i == ncount)
						temp3->next = NULL;
					else
					{
						newnode = getnode();

						temp3->next = newnode;
						temp3 = temp3->next;
						temp = temp->next;
					}
				}

				temp2 = start2;
				temp3 = start3;

				printf("\nAfter splitting.\n");

				printf("\nThe First list is: \n");
				if(m == 0)
					printf("EMPTY");
				else
				{
					while(temp2 != NULL)
					{
						printf("\t%d",temp2->data);
						temp2 = temp2->next;
					}
				}

				printf("\nThe Second list is: \n");
				if(n == 0)
					printf("EMPTY");
				else
				{
					while(temp3 != NULL)
					{
						printf("\t%d",temp3->data);
						temp3 = temp3->next;
					}
				}
			}

			else
				printf("\nINVALID INPUT\n");
		}

		else
			printf("\nThere is only one element in the list.Hence, Split not possible.\n");
	}
}



//F14: Reverse Function
void Reverse()
{
	struct node *temp, *start2=NULL, *newnode;

	temp=start;

	if(temp==NULL)
		printf("\nThe list is empty.\n");
	else
	{
		while(temp != NULL)
		{
			newnode = getnode();
			newnode->data = temp->data;
			newnode->next = start2;
			start2 = newnode;

			temp = temp->next;
		}

		temp = start2;

		while(temp != NULL)
		{
			printf("\n%d", temp->data);
			temp = temp->next;
		}
	}
}


