#include <stdio.h>
#include <stdlib.h>

typedef struct node *treePointer;
typedef struct node{
        char data;
        treePointer left, right;
};

typedef struct listNode *listPointer;
typedef struct listNode{
        treePointer data;
        listPointer link;
};

listPointer top=NULL;

void push(treePointer item)
{
	 listPointer node;
	 node = (listPointer)malloc(sizeof(*node));// malloc() listNode  �ñN��mstore �bnode
	 node->data = item;// node��data�]�� item
	 node->link = NULL;// node��link�]�� NULL 
     if(top == NULL  ) //if top is null
     {
       top = node; // �Ntop �]�� node
        }
     else
        {
        node->link = top;  // node��link ���V top 
        top = node;   // �N top �אּ  node  
        }
}

treePointer pop()
{
    if(top != NULL)    // if top ���� NULL 
    {
    	listPointer temp = top;// listPointer temp�]��top 
        top = top->link;// �N top �אּ top ���U�@�� �`�I 
        treePointer item = temp->data;//���X temp��data��� treePointer item
        free(temp);// free temp
        return item;// �^�� item
        }
    return NULL;//�^�� NULL
} 
void preorder(treePointer ptr)
{
    if(ptr){
    	printf("%c ",ptr->data);
     	preorder(ptr->left);
     	preorder(ptr->right);
     		
	 } 
}

void postorder(treePointer ptr)
{
	if(ptr){
     	postorder(ptr->left);
     	postorder(ptr->right);
     	printf("%c ",ptr->data);	
	 }

}

void inorder(treePointer ptr)
{
     if(ptr){
     	inorder(ptr->left);
     	printf("%c ",ptr->data);
     	inorder(ptr->right);
	 }
     
}



main()
{char expr[100];
      int i=0;
	  treePointer node;
      treePointer left, right;
      
      scanf("%s",expr);// input ��m�� ��  expr   12+7*
    
	  while(expr[i] != '\0')  // if expr[i] is not '\0' contine the loop
	  {
	  	node = (treePointer)malloc(sizeof(*node));// malloc() treeNode �ñN��m store �b node
	  
	  	node->data = expr[i];// store expr[i] node's data
	  
	  	node->left = NULL;// node's left, right is set to NULL
	  	node->right = NULL;
	  	
	  	 if(expr[i] >= 49 && expr[i] <= 57) // expr[i] is '1'~'9'
	  	 {
			push(node); // push node into stack
		
		   }
	  	 else {
	  	 	right = pop();    // store pop() to right
	  	
	  	 	left = pop();    // store pop() to left
	  	 
	  	 	node->right = right;    // store right to node's right
	  	 	    
	  	 	node->left = left;    // store left to  node's left
	  	 	    
	  	 	push(node);    // push node into stack
	  	 	   
		   }
		   i++; 
	  }
	  
	  // store pop() to treePointer root
	  postorder(node); //12+7*
	  printf("\n");
	  inorder(node); //1+2*7
	  printf("\n");
	  preorder(node); //*+127
      system("pause");      
}
     
      
      
