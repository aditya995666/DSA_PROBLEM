#include<iostream>
using namespace std;
class node {
    public:
    int val;
    node* next;
 node (int data){
    val=data;
    next=NULL;
 }   

};
void inserthead(node* &head,int val){
    node* new_node=new node (val);
    new_node->next=head;
    head=new_node;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head =NULL;
    inserthead(head,2);
    display(head);


}