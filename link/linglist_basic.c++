#include<iostream>
using namespace std;
//deffine a class  and object;
class node{
    public:
    int value;
    node* next;
    //derive a construucter;
    node(int data){
        value=data;
        next=NULL;
    }
};
void inserthead(node* &head , int value){
  node*  new_node=new node(value);
    new_node->next = head;
    head=new_node;
}
void insertail(node* &head,int value,int pos){

    if(pos==0){
        inserthead(head,value);
        return;
    }
    node* new_node=new node(value);
    node* temp=head;
    int curr_pos=0;
    while(curr_pos!=pos-1){
        temp=temp->next;
        curr_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    inserthead(head,2);
    display(head);
    inserthead(head,1);
    display(head);
    insertail(head,4,3);
    display(head);
    

}