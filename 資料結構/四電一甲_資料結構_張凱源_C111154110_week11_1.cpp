#include <stdio.h>
#include <stdlib.h>

typedef struct listNode* listPointer;
typedef struct listNode{
        int data;
        listPointer link;
};

listPointer top=NULL;

void push(int item)
{
	 listPointer node;
	 node = (listPointer)malloc(sizeof(*node));// malloc() listNode  �ñN��mstore �bnode
	 node->data = item;// node��data�]�� item
	 node->link = NULL;// node��link�]�� NULL 
     if( top==NULL ) //if top is null
     {
        top = node;// �Ntop �]�� node
        }
     else
        {
         node->link = top;  // node��link ���V top  
         top = node;  // �N top �אּ  node  
        }
}

int pop()
{
    if( top!=NULL )    // if top ���� NULL 
    {
    	listPointer temp = top;// listPointer temp�]��top 
        top = top->link;// �N top �אּ top ���U�@�� �`�I 
        int item = temp->data;//���X temp��data��� item
        free(temp);// free temp
        return item;// �^�� item
        }
    return -1;//�^��-1 
} 

void printlist(listPointer first)
{
    while(first!= NULL)
    {
       printf("(%x,%d,%x)", first, first->data, first->link);
       first = first->link;
   };
   printf("\n");
}

main()
{
       push(10);// push 10
       printlist(top);
	   push(20);// push 20
	   printlist(top);
	   push(30);// push 30
	   printlist(top);
	   pop();// print pop()
	   printlist(top);
	   pop();// print pop()
	   printlist(top);
	   pop();// print pop()
	   printlist(top);
       system("pause");// system("pause");
      
}
            
      
      
