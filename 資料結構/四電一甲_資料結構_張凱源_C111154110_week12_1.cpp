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
	 node = (listPointer)malloc(sizeof(*node));// malloc() listNode  並將位置store 在node
	 node->data = item;// node的data設為 item
	 node->link = NULL;// node的link設為 NULL 
     if( head == NULL) //if head is null
     {
        head = node;// 將 head 設為 node
        tail = node;//將 tail 設為 ndoe 
        }
     else
        {
           tail->link = node;// 將 tail的link設為 node  
           tail = node;// 將 tail 改為 node 
        }
}

int deleteq()
{
    if(head != NULL)    // if head 不為 NULL 
    {
        listPointer temp = head;// listPointer temp設為 head 
        head = head->link;// 將 head 改為 head的下一個節點
        if(head == NULL)// if head 已經是NULL 
            tail = NULL;// tail 也要改為 NULL 
        int item = temp->data;// 取出temp的data放在item 
        free(temp);// free temp 
        return item;// 回傳 item
        }
    return -1;//回傳-1 
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
            
      
      
