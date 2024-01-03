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
class linklistlist{
    public:
    node* head;
    linklistlist(){
        head=NULL;
    }
    void insertail(int value){
        node* new_node = new node(value);
        if(head==NULL){
            head=new_node;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=new_node;
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"->";
            temp=temp->next;

        }
        cout<<"NULL"<<endl;
    }

};
void deletealternate( node* &head){
    node* cur_node=head;
    while(cur_node!=NULL && cur_node->next!=NULL){
     node* temp=cur_node->next;
     cur_node->next=cur_node->next->next;
     free(temp);
     cur_node=cur_node->next;
    }
}
int main(){
    linklistlist l1;
    l1.insertail(1);
     l1.insertail(2);
      l1.insertail(3);
       l1.insertail(4);
        l1.display();
        deletealternate(l1.head);
        l1.display();
}

