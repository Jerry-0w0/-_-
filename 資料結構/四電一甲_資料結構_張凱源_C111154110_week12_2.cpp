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
 //遞迴樹狀二分搜尋法    

}

int* iterSearch(treePointer root, int k)
{
// 迴圈樹狀二分搜尋法 
     
     
}
    
    
void insertBStree(treePointer* root, treePointer node)
{ // if *root == NULL
  //    將 *root 設為 node
  // else if  node 的 data 大於 *root 的 data 
  //              再度用 *root 的 right 和 node 呼叫insertBStree(),  
  //      else
  //              再度用 *root 的 left 和 node 呼叫insertBStree(),  
  //           
}

main()
{
      treePointer  A, B, C, D, E;
     A = (treePointer)malloc(sizeof(*A));// 配置一個node空間並讓 A 指向此node 空間的起始位址
     A->data = 35; A->left = NULL; A->right = NULL;// 將 A 的 data 設成 35, left 和 right 設成 NULL
     B = (treePointer)malloc(sizeof(*B));// 配置一個node空間並讓 B 指向此node 空間的起始位址
     B->data = 46; B->left = NULL; B->right = NULL;// 將 B 的 data 設成 46, left 和 right 設成 NULL
     C = (treePointer)malloc(sizeof(*C));// 配置一個node空間並讓 C 指向此node 空間的起始位址
     C->data = 20; C->left = NULL; C->right = NULL;// 將 C 的 data 設成 20, left 和 right 設成 NULL
     D = (treePointer)malloc(sizeof(*D));// 配置一個node空間並讓 D 指向此node 空間的起始位址
     D->data = 27; D->left = NULL; D->right = NULL;// 將 D 的 data 設成 27, left 和 right 設成 NULL
     E = (treePointer)malloc(sizeof(*E));//配置一個node空間並讓 E 指向此node 空間的起始位址
     E->data = 38; E->left = NULL; E->right = NULL;// 將 D 的 data 設成 38, left 和 right 設成 NULL
     A->left = C; A->right = B;// 將 A的 left 指向 C, right 指向 B
     C->right = D;// 將 C 的 right 指向 D
     B->left = E;// 將 B的 left 指向 E
     treePointer root = A;// 宣告一個 treePointer root 並指向 A 
     inorder(root);// 呼叫 inoder() 將  tree 的所有 node 照著 inorder順序走一次 
     printf("\n");
     postorder(root);// 呼叫 postorder()  將  tree 的所有 node 照著 post order順序走一次 
     printf("\n");
     preorder(root);// 呼叫 preorder()  將  tree 的所有 node 照著 pre order順序走一次 
     
     // 二分搜尋樹 
     // 呼叫 search() 搜尋 tree裡面有無 27 , printf 回傳指標 p 以及*p 
     // 呼叫  iterSearch() 搜尋 tree裡面有無 38, printf 回傳指標 p 以及*p 
     // 呼叫 iterSearch() 搜尋 tree裡面有無 100, printf 回傳指標 p 以及*p
     
     // 建立二分搜尋樹 
     // 宣告一個 TreePointer btree, 並設為 NULL 
     // 呼叫 insertBStree(), 將 E 放入 二分搜尋樹btree 
     // 呼叫 insertBStree(), 將 D 放入 二分搜尋樹 btree 
     // 呼叫 insertBStree(), 將 C 放入 二分搜尋樹 btree
     // 呼叫 insertBStree(), 將 A 放入 二分搜尋樹 btree 
     // 呼叫 insertBStree(), 將 B 放入 二分搜尋樹 btree
     // 呼叫 inorder(), 將 btree的所有節點走一遍  
      system("pause");// system("pause");
      
}
     
      
      
