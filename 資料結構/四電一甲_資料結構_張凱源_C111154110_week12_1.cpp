#include <stdio.h>
#include <stdlib.h>

typedef struct listNode* listPointer;
typedef struct listNode{
        int data;
        listPointer link;
};

listPointer head=NULL, tail=NULL;

void addq(int item)
{
	listPointer node;
	 node = (listPointer)malloc(sizeof(*node));// malloc() listNode  �ñN��mstore �bnode
	 node->data = item;// node��data�]�� item
	 node->link = NULL;// node��link�]�� NULL 
     if( head == NULL) //if head is null
     {
        head = node;// �N head �]�� node
        tail = node;//�N tail �]�� ndoe 
        }
     else
        {
           tail->link = node;// �N tail��link�]�� node  
           tail = node;// �N tail �אּ node 
        }
}

int deleteq()
{
    if(head != NULL)    // if head ���� NULL 
    {
        listPointer temp = head;// listPointer temp�]�� head 
        head = head->link;// �N head �אּ head���U�@�Ӹ`�I
        if(head == NULL)// if head �w�g�ONULL 
            tail = NULL;// tail �]�n�אּ NULL 
        int item = temp->data;// ���Xtemp��data��bitem 
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
      addq(10);// addq 10
      printf("%d \n",tail->data );     
      addq(20);// addq 20
      printf("%d \n",tail->data );
      addq(30);// addq 30
      printf("%d \n",tail->data );
      printf("%d \n" ,deleteq());// print deleteq()
      printf("%d \n" ,deleteq());// print deleteq()
      printf("%d \n" ,deleteq());// print deleteq()
      printf("%d \n" ,deleteq());
      system("pause");// system("pause");
}
            
      
      
