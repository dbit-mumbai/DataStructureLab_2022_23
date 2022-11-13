/*
	NAME	      : SRAINA PANCHANGAM
	ROLL NO.      : 43
	PROGRAM NAME  : DOUBLE CIRCULAR LINKED LIST
*/

//Operations performed on double circular linked lists - Create,Insert,Delete,Display,Search,Count,Copy,Concatenate,Split and Reverse.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next, *prev; //self referential
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

int main()
{
	char c;  //To continue


	do
	{
		int ch;

		printf("\nThe new list is: ");
		Display();

		printf("\n\n--------DOUBLE CIRCULAR LINKED LIST--------");
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
				newnode->prev = NULL;
			}
			else
			{
				newnode->prev = temp;
				temp->next = newnode;
				temp = temp->next;
			}

			if(i == n)
			{
				newnode->next = start;
				start->prev = temp;
			}

			else
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
	struct node *newnode, *temp;
	int x;

	temp = start;

	printf("\n\nEnter value to be entered:  ");
	scanf("%d", &x);

	newnode = getnode();
	newnode->data = x;

	if(temp == NULL)
	{
		start = newnode;
		newnode->prev = start;
		newnode->next = start;
	}

	else
	{
		newnode->next = start;
		temp->prev = newnode;

		do
		{
			temp = temp->next;
		}while(temp->next != start);

		temp->next = newnode;
		newnode->prev = temp;
		start=newnode;
	}

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
			if(temp->next == start)
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
			(temp->next)->prev = newnode;
			temp->next = newnode;
			newnode->prev = temp;


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

		while(temp->next != start)
		{
			temp = temp->next;
		}

		newnode = getnode();
		newnode->data=x;
		temp->next = newnode;
		newnode->prev = temp;
		newnode->next = start;
		start->prev = newnode;

		printf("\nNew element %d is inserted successfully at the end.\n", x);
		Display();
	}
}



//F5: Delete at beginning Function
void DelBeg()
{
	int x;
	struct node *temp, *ptr;

	temp = start;
	ptr = start;

	if(temp == NULL)
		printf("\nList is empty.\n");

	else if(temp->next == start)
	{
		x = temp->data;

		start = NULL;

		freenode(temp);

		printf("\nfirst element %d is deleted successfully.\n", x);
		Display();
	}

	else
	{
		x = temp->data;

		do
		{
			temp = temp->next;
		}while(temp->next != start);

		temp->next = ptr->next;
		(ptr->next)->prev = temp;
		start = ptr->next;

		freenode(ptr);

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

		else if((cnt == 1)&&(p != 1))
			printf("\nOnly one element is present in the list.Hence 'INVALID LOCATION'.\n");

		else
		{
			for(i=1;i<p-1;i++)  //p-2 jumps
			{
				if(temp->next->next == start)
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
				(ptr->next)->prev = temp;
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
		while((temp->next)->next != start)
		{
			temp = temp->next;
		}

		ptr = temp->next;

		if(ptr != start)
		{
			x = ptr->data;

			temp->next = start;
			start->prev = temp;

			freenode(ptr);

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

		do
		{
			printf("\n%d",temp->data);
			temp = temp->next;
		}while(temp != start);
	}
}



//F9: Search Function
void Search()
{
	int x,loc = 0, flag = 0;
	struct node *temp;

	temp=start;

	if(temp==NULL)
		printf("\nThe list is empty.\n");
	else
	{
		printf("\n\nEnter element to be searched:  ");
		scanf("%d", &x);

		do
		{
			loc++;

			if(temp->data == x)
			{
				flag = 1;
				printf("\nElement %d found at %d location.\n", x, loc);
				break;
			}

			temp = temp->next;
		}while(temp != start);

		if(flag == 0)
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
		do
		{
			count++;
			temp = temp->next;
		}while(temp != start);
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
		newnode->prev = NULL;

		do
		{
			temp2->data = temp->data;

			if(temp->next != start)
			{
				newnode = getnode();

				newnode->prev = temp2;
				temp2->next = newnode;

				temp = temp->next;
				temp2 = temp2->next;
			}

			else
			{
				temp2->next = start2;
				start2->prev = temp2;
				temp = temp->next;
			}

		}while(temp != start);

		temp2 = start2;

		printf("\nThe list after copying is: ");

		do
		{
			printf("\n%d", temp2->data);
			temp2 = temp2->next;
		}while(temp2 != start2);
	}
}



//F12: Concatenate Function
void Concat()
{
	struct node *temp, *temp2;

	s1 = start;
	temp=s1;

	printf("\nThe first list is: ");
	Display();

	printf("\n\nEnter elements of the second list: ");
	s2 = Create();

	start = s1;

	temp2 = s2;

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

	else if(s1 != NULL)
	{
		while(temp->next != start)
			temp = temp->next;

		temp->next = s2;
		s2->prev = temp;


		while(temp2->next != s2)
			temp2 = temp2->next;

		temp2->next = s1;
		s1->prev = temp2;

		printf("\nThe list after merging is: ");

		temp=s1;

		do
		{
			printf("\n%d", temp->data);
			temp = temp->next;
		}while(temp != s1);
	}

	else
	{
			printf("\nThe list after merging is: ");

			start = s2;

			do
			{
				printf("\n%d", temp2->data);
				temp2 = temp2->next;
			}while(temp2 != s2);
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
						newnode->prev = NULL;
						start2 = newnode;
						temp2 = newnode;
					}

					temp2->data = temp->data;

					if(i == m)
					{
						start2->prev = temp2;
						temp2->next = start2;
					}

					else
					{
						newnode = getnode();
						newnode->prev = temp2;
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
						newnode->prev = NULL;
						start3 = newnode;
						temp3 = newnode;
					}

					temp3->data = temp->data;

					if(i == ncount)
					{
						start3->prev = temp3;
						temp3->next = start3;
					}

					else
					{
						newnode = getnode();
						newnode->prev = temp3;
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
					do
					{
						printf("\t%d",temp2->data);
						temp2 = temp2->next;
					}while(temp2 != start2);
				}

				printf("\nThe Second list is: \n");
				if(n == 0)
					printf("EMPTY");
				else
				{
					do
					{
						printf("\t%d",temp3->data);
						temp3 = temp3->next;
					}while(temp3 != start3);
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
	int cnt, i;
	struct node *temp, *start2=NULL, *temp2, *ptr, *newnode;

	temp=start;
	temp2 = start2;

	cnt = Count();

	if(temp==NULL)
		printf("\nThe list is empty.\n");

	else if(cnt == 1)
	{
		newnode = getnode();
		newnode->data = temp->data;
		start2 = newnode;
		temp2 = newnode;
		temp2->next = start2;
		start2->prev = temp2;

		do
		{
			printf("\n%d", temp2->data);
			temp2 = temp2->next;
		}while(temp2 != start2);
	}

	else
	{
		newnode = getnode();
		ptr = newnode;
		newnode->next = NULL;
		newnode->prev = NULL;

		start2 = newnode;
		temp2 = start2;

		for(i=2;i<=cnt;i++)
		{
			newnode->data = temp->data;

			newnode = getnode();

			newnode->next = start2;
			newnode->prev = temp2;

			temp2->prev = newnode;
			start2 = newnode;

			temp2 = temp2->prev;
			temp = temp->next;
		}

		newnode->data = temp->data;

		ptr->next = start2;
		start2->prev = ptr;
		temp2 = start2;

		do
		{
			printf("\n%d", temp2->data);
			temp2 = temp2->next;
		}while(temp2 != start2);
	}
}


