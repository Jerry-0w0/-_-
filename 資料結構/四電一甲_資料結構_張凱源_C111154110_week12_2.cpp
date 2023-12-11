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
 //���j�𪬤G���j�M�k    

}

int* iterSearch(treePointer root, int k)
{
// �j��𪬤G���j�M�k 
     
     
}
    
    
void insertBStree(treePointer* root, treePointer node)
{ // if *root == NULL
  //    �N *root �]�� node
  // else if  node �� data �j�� *root �� data 
  //              �A�ץ� *root �� right �M node �I�sinsertBStree(),  
  //      else
  //              �A�ץ� *root �� left �M node �I�sinsertBStree(),  
  //           
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
     A->left = C; A->right = B;// �N A�� left ���V C, right ���V B
     C->right = D;// �N C �� right ���V D
     B->left = E;// �N B�� left ���V E
     treePointer root = A;// �ŧi�@�� treePointer root �ë��V A 
     inorder(root);// �I�s inoder() �N  tree ���Ҧ� node �ӵ� inorder���Ǩ��@�� 
     printf("\n");
     postorder(root);// �I�s postorder()  �N  tree ���Ҧ� node �ӵ� post order���Ǩ��@�� 
     printf("\n");
     preorder(root);// �I�s preorder()  �N  tree ���Ҧ� node �ӵ� pre order���Ǩ��@�� 
     
     // �G���j�M�� 
     // �I�s search() �j�M tree�̭����L 27 , printf �^�ǫ��� p �H��*p 
     // �I�s  iterSearch() �j�M tree�̭����L 38, printf �^�ǫ��� p �H��*p 
     // �I�s iterSearch() �j�M tree�̭����L 100, printf �^�ǫ��� p �H��*p
     
     // �إߤG���j�M�� 
     // �ŧi�@�� TreePointer btree, �ó]�� NULL 
     // �I�s insertBStree(), �N E ��J �G���j�M��btree 
     // �I�s insertBStree(), �N D ��J �G���j�M�� btree 
     // �I�s insertBStree(), �N C ��J �G���j�M�� btree
     // �I�s insertBStree(), �N A ��J �G���j�M�� btree 
     // �I�s insertBStree(), �N B ��J �G���j�M�� btree
     // �I�s inorder(), �N btree���Ҧ��`�I���@�M  
      system("pause");// system("pause");
      
}
     
      
      
