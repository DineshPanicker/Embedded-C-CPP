#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data; struct node *link;
};

void append(struct node **,int);
void addatbeg(struct node **,int);
void addafter(struct node *,int,int);
void display(struct node *);
int count(struct node *);
void del(struct node **,int);
void reverse(struct node **);

int main()
{
	struct node *p;
	p = NULL;
	append(&p,45);append(&p,5);append(&p,23);
	display(p);
	addatbeg(&p,69);addatbeg(&p,45);
	display(p);
	addafter(p,2,34);addafter(p,4,49);
	display(p);
	printf("No of elements: %d\n",count(p));
	del(&p,69);del(&p,45);
	display(p);

	printf("Reversing the linked list:\n");
	reverse(&p);
	display(p);
		
	return 0;
}

void append(struct node **q,int num)
{
	struct node *temp,*r;
	if(*q == NULL) //first element
	{
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = num;
		temp->link = NULL;
		*q = temp;
	}
	else
	{
		temp = *q;
		/*Traversing the linkedlist*/

		while(temp->link != NULL)
			temp = temp->link;
		/*adding a node at end*/
		r = (struct node *)malloc(sizeof(int));
		r->data = num;
		r->link = NULL;
		temp->link = r;
	}
}

//adding a node at the beggining

void addatbeg(struct node **q,int num)
{
	struct node *temp;
	//adding a new node
	temp = (struct node*) malloc(sizeof(struct node));
	temp->data = num;
	temp->link = *q;//adding link part of this node to point to the existing first node
	*q = temp;
}

//adding a node after a number of node

void addafter(struct node *q, int loc, int num)
{
	struct node *temp,*r;
	int i;
	temp = q;
	//skip to the desired position
	for(i = 0; i < loc; i++)
	{
		temp = temp->link;
		//end of the linkedlist:
		if(temp == NULL)
		{
			printf("There are less than %d elements in the list\n",loc);
			return;
		}
	}
	//inserting new node
	r = (struct node *) malloc(sizeof(int));
	r->data = num;
	r->link = temp->link;
	temp->link = r;
}

void reverse(struct node **x)
{
	struct node *q,*r,*s;
	q = *x;
	r = NULL;
	//traversing the entire LL
	while(q != NULL)
	{
		s = r;
		r = q;
		q = q->link;
		r->link = s;
	}
	*x = r;
}


//displaying the nodes
void display(struct node *q)
{
	while(q != NULL)
	{
		printf(" %d ",q->data);
		q = q->link;
	}
	printf("\n");
}

int count(struct node *q)
{
	int c = 0;
	while(q != NULL)
	{
		q = q->link;
		c++;
	}
	return c;
}

//deletion
void del(struct node **q,int num)
{
	struct node *old,*temp;
	temp = *q;
	while(temp != NULL)
	{
		if(temp->data == num)
		{
			if(temp == *q)
				*q = temp->link;
			else
				old->link = temp->link;
			free(temp);
			return;
		}
		else
		{
			old = temp;
			temp = temp->link;
		}
	}
	printf("Element %d not found!!\n",num);
}

