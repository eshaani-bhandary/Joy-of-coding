/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct book{
	int book_id;
	float book_price;	
};

typedef struct book * BOOK;

BOOK getnode(){
	BOOK temp=(BOOK)malloc(sizeof(struct book));
	if(temp==NULL){
		printf("Memory not allocated\n");
		exit(0);
	}
	return temp;
}

void accept(BOOK item){
	item=getnode();
	
	printf("Enter the details of the book to be published\n");
	
	printf("Book Id: \t");
	scanf("%d",&item->book_id);
	
	printf("Book Price: \t");
	scanf("%f",&item->book_price);	
}

void push(BOOK *stack, int *top,BOOK item){
	if(*top>=5){
		printf("There are already 5 books in the stack\n");
		return;
	}
	(*top)++;
	stack[*top]=item;	
	printf("Book placed on the stack\n");
}

void pop(BOOK *stack, int *top){
	if(*top==-1){
		printf("No books in the stack\n");
		return;
	}
	free(stack[*top]);
	(*top)--;
	printf("Book removed from the stack\n");
}

void display(BOOK * stack,int top){
	int i;
	for(i=0;i<top;i++){
		printf("Book Id: %d\n",stack[i]->book_id);
		printf("Book Price: %f\n",stack[i]->book_price);
	}
}

int main(){
	BOOK stack[5];
	int top=-1,ch;
	BOOK item;
	
	while(1){
		printf("1:Add book to stack\n2:Remove book from stack\n3:View the stack\nAny other key:exit\n\n");
		scanf("%d",&ch);
		
		switch(ch){
			case 1: 
					accept(item);
					push(stack,&top,item);
					break;
					
			case 2:	pop(stack,&top);
					break;
					
			case 3: display(stack,top);
					break;
					
			default: exit(0);
		}
	}
	

}