//bst ko code
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int key;
    struct Node *left;
    struct Node *right;
};
struct Node* createNode(int key){
    struct Node *temp;
      temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp == NULL){
        printf("Memory allocation failed");
        exit(1);
    }

    temp->key = key;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

int insertChild(struct Node *node, int key){
    if(key < node->key){
        if(node->left == NULL){
            node->left = createNode(key);
            return 1;
        }
        else{
            return -1;
        }
    }
    else if(key > node->key){
        if(node->right == NULL){
            node->right = createNode(key);
            return 2;
        }
        else{
            return -2;
        }
    }else{
        return -3;
    }
}

int main(){
    struct Node *root;
    int r;
    root = createNode(10);
    r = insertChild(root,5);
    printf("%d\n",r);
    r = insertChild(root,15);
    printf("%d\n",r);
    r = insertChild(root,5);
    printf("%d\n",r);

}