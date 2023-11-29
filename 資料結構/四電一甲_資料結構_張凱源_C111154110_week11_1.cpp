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
	 node = (listPointer)malloc(sizeof(*node));// malloc() listNode  並將位置store 在node
	 node->data = item;// node的data設為 item
	 node->link = NULL;// node的link設為 NULL 
     if( top==NULL ) //if top is null
     {
        top = node;// 將top 設為 node
        }
     else
        {
         node->link = top;  // node的link 指向 top  
         top = node;  // 將 top 改為  node  
        }
}

int pop()
{
    if( top!=NULL )    // if top 不為 NULL 
    {
    	listPointer temp = top;// listPointer temp設為top 
        top = top->link;// 將 top 改為 top 的下一個 節點 
        int item = temp->data;//取出 temp的data放到 item
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
            
      
      
