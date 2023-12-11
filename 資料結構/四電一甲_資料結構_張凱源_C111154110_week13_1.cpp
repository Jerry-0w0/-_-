#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode *treePointer;
typedef struct treeNode{
        int data;
        treePointer left, right;
};

void preorder(treePointer ptr)
{
    if(ptr){
    	printf("%d ",ptr->data);
     	preorder(ptr->left);
     	preorder(ptr->right);
     		
	 } 
}

void postorder(treePointer ptr)
{
	if(ptr){
     	postorder(ptr->left);
     	postorder(ptr->right);
     	printf("%d ",ptr->data);	
	 }

}

void inorder(treePointer ptr)
{
     if(ptr){
     	inorder(ptr->left);
     	printf("%d ",ptr->data);
     	inorder(ptr->right);
	 }
     
}

int* search(treePointer root, int key)
{
 	if(!root)
	 	return NULL;//���j�𪬤G���j�M�k  
	if(key == root->data)
		return &(root->data);
	if(key < root->data)
		return search(root->left , key);
	else
		return search(root->right , key);	  

}

int* iterSearch(treePointer root, int k)
{
	while(root){// �j��𪬤G���j�M�k
	if(k == root->data)
		return &(root->data);
	if(k < root->data)
		root = root->left;
	else
		root = root->right;
	}
    return NULL;
     
}
    
    
void insertBStree(treePointer* root, treePointer node)
{ 
	if(*root == NULL)// if *root == NULL
  		(*root) = node;//    �N *root �]�� node
  	else if(node->data > (*root)->data)// else if  node �� data �j�� *root �� data 
  		insertBStree(&((*root)->right),node);//�A�ץ� *root �� right �M node �I�sinsertBStree(),  
  	else//      else
  		insertBStree(&((*root)->left),node);//�A�ץ� *root �� left �M node �I�sinsertBStree(),          
}

main()
{
      treePointer  A, B, C, D, E;
     A = (treePointer)malloc(sizeof(*A));// �t�m�@��node�Ŷ����� A ���V��node �Ŷ����_�l��}
     A->data = 35; A->left = NULL; A->right = NULL;// �N A �� data �]�� 35, left �M right �]�� NULL
     B = (treePointer)malloc(sizeof(*B));// �t�m�@��node�Ŷ����� B ���V��node �Ŷ����_�l��}
     B->data = 46; B->left = NULL; B->right = NULL;// �N B �� data �]�� 46, left �M right �]�� NULL
     C = (treePointer)malloc(sizeof(*C));// �t�m�@��node�Ŷ����� C ���V��node �Ŷ����_�l��}
     C->data = 20; C->left = NULL; C->right = NULL;// �N C �� data �]�� 20, left �M right �]�� NULL
     D = (treePointer)malloc(sizeof(*D));// �t�m�@��node�Ŷ����� D ���V��node �Ŷ����_�l��}
     D->data = 27; D->left = NULL; D->right = NULL;// �N D �� data �]�� 27, left �M right �]�� NULL
     E = (treePointer)malloc(sizeof(*E));//�t�m�@��node�Ŷ����� E ���V��node �Ŷ����_�l��}
     E->data = 38; E->left = NULL; E->right = NULL;// �N D �� data �]�� 38, left �M right �]�� NULL
     //A->left = C; A->right = B;// �N A�� left ���V C, right ���V B
     //C->right = D;// �N C �� right ���V D
     //B->left = E;// �N B�� left ���V E
     //treePointer root = A;// �ŧi�@�� treePointer root �ë��V A 
     /*inorder(root);// �I�s inoder() �N  tree ���Ҧ� node �ӵ� inorder���Ǩ��@�� 
     printf("\n");
     postorder(root);// �I�s postorder()  �N  tree ���Ҧ� node �ӵ� post order���Ǩ��@�� 
     printf("\n");
     preorder(root);// �I�s preorder()  �N  tree ���Ҧ� node �ӵ� pre order���Ǩ��@�� 
     printf("\n");*/
     // �G���j�M�� 
     /*printf("%x , %d",search(root,27),*search(root,27));// �I�s search() �j�M tree�̭����L 27 , printf �^�ǫ��� p �H��*p 
     printf("\n");
     printf("%x , %d",search(root,38),*search(root,38));// �I�s  iterSearch() �j�M tree�̭����L 38, printf �^�ǫ��� p �H��*p 
     printf("\n");
     printf("%x",search(root,100));// �I�s iterSearch() �j�M tree�̭����L 100, printf �^�ǫ��� p �H��*p
     printf("\n");*/
     // �إߤG���j�M�� 
     treePointer btree = NULL;// �ŧi�@�� TreePointer btree, �ó]�� NULL 
     insertBStree(&btree,E);// �I�s insertBStree(), �N E ��J �G���j�M��btree 
     insertBStree(&btree,D);// �I�s insertBStree(), �N D ��J �G���j�M�� btree 
     insertBStree(&btree,C);// �I�s insertBStree(), �N C ��J �G���j�M�� btree
     insertBStree(&btree,A);// �I�s insertBStree(), �N A ��J �G���j�M�� btree 
     insertBStree(&btree,B);// �I�s insertBStree(), �N B ��J �G���j�M�� btree
     inorder(btree);// �I�s inorder(), �N btree���Ҧ��`�I���@�M  
      system("pause");// system("pause");
      
}
     
      
      
