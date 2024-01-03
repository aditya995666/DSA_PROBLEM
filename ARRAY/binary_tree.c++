#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;

};
//created node;
struct node* created(int data){
    struct node* n;
    n=(struct node*) malloc (sizeof(struct node));//declare seze;
    n->data=data;
    n->left=NULL;
    n->right=NULL;

}
int main(){
    struct node* p=created(2);
    struct node* p1=created(3);
    struct node* p2=created(4);
    p->left=p1;
    p->right=p2;
}