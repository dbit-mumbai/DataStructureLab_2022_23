//Binary Tree  Traversal  
# include <stdio.h>
# include <conio.h>

struct bt
{
    int info;
    struct bt *left,*right;
}node;

int count=1;

struct bt* getnode (void)
{
    return  (( struct bt* ) malloc (sizeof(struct bt)));
}

void freenode(struct bt *p)
{
    free(p);
}

struct bt* insert(struct bt *r,int x)
{
    struct bt *newnode;

    if(r==NULL)
	{
		newnode=getnode();
		newnode->info=x;
		newnode->left=NULL;
		newnode->right= NULL;
		r=newnode;

		count++;
	}
    else{
		if(count%2==0)
			r->left=insert(r->left,x);
		else
			r->right=insert(r->right,x);
    }

return(r);
}

void inorder(struct bt *r)
{
    if(r!=NULL)
    {
        inorder(r->left);
        printf("\n\t %d ",r->info);
        inorder(r->right);
    }
}

void preorder(struct bt *r)
{
    if(r!=NULL)
    {
        printf("\n\t %d ",r->info);
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(struct bt *r)
{
    if(r!=NULL)
    {
        postorder(r->left);
        postorder(r->right);
        printf("\n\t %d ",r->info);

  }
}

void main ()
{
    int ch,x;
    struct bt *root=NULL;
    while(1)
    {
        //clrscr();
        printf("\n  ----- Linked List -----");
        printf("\n 1. Insert\n 2. PreOrder\n 3. InOrder\n 4. PostOrder\n 5. Exit");

        printf("\n Enter your Choice : "); 
        scanf("%d",&ch);
        switch(ch)
	    {
	        case 1: printf(" Enter the node value:");
		            scanf("\n %d",&x);
		            root=insert(root,x);
		            break;

	        case 2 : preorder(root);//getch(); 
                     break;
	
            case 3 : inorder(root);//getch(); 
                     break;
	
            case 4 : postorder(root);//getch(); 
                    break;
	
            case 5 :exit(1);
	        
            default : printf ("\n Wrong Choice");
	    }
    }  // end of while
//getch();
}