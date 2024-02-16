#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

  struct node *createNode(int data){
      struct node *n;

      n = (struct node*)malloc(sizeof(struct node));
        n->data=data;
        n->left=NULL;
        n->right=NULL;
        return n;
}
 
   void inOrder(struct node *root){
       if (root!=NULL){
           inOrder(root->left);
           printf("%d",root->data);
           inOrder(root->right);
       }
   }

    struct node *searchIter(struct node *root, int key){
        while (root!=NULL) {
            if (key = root->data) {
                return root;
            }
            
           else if (key<root->data) {
                root = root->left;
            }
              else {
                root = root->right;
            }
      }
      return NULL;
   }

   int main() {
      struct node *p = createNode(5);
      struct node *p1 = createNode(3);
      struct node *p2 = createNode(6);
      struct node *p3 = createNode(2);
      struct node *p4 = createNode(4);
      
             p->left=p1;
             p->right=p2;
             p1->left=p3;
             p1->right=p4;
           
          inOrder(p);

      struct node *n = searchIter(p, 5); 
      //You can pass any Value of the Key inside the Arguement of the SearchIter function here.... 
              if (n!=NULL) {
                printf("\nElement Found %d",n->data);
              }
           else {
            printf("\nElement Not Found");
         }
          return 0;
  }