#include<iostream>
using namespace std;
class  node{
    public:
    node* next;
    int value;
    node(int data){
        value=data;
        next=NULL;
    }
    };
    class linklist{
        public:
       node* head;
       linklist(){
        head=NULL;
       }
       void inserttail(int  value){
        node* new_node=new node(value);
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
    void dileting(node* &head){
        node* cur_node=head;
       while(cur_node!=NULL){
        while(cur_node->next!=NULL && cur_node->value==cur_node->next->value){
            node* temp=cur_node->next;
       cur_node->next=cur_node->next->next;
       free(temp);
        }
        //linklist end;
        cur_node=cur_node->next;
       }
       }
    int main(){
        linklist l1;
      l1.  inserttail(1);
       l1. inserttail(2);
        l1.inserttail(2);
       l1. inserttail(3);
       l1. inserttail(3);
       l1. display();
       dileting(l1.head);
       l1.display();
    }


