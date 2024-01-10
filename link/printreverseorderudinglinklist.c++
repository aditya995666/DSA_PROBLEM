#include<iostream>
using namespace std;
class node{
    public:
    int value;
    node* next;

 node( int data){
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
    void inserttail(int value){
        node* new_node=new node(value);
        if(head==NULL){
            head=new_node;
             return;
        }
        node*temp=head;
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

void reverse(node* &head){
    //base case;
    if(head==NULL){
        return;
    }
    reverse(head->next);
    cout<<head->value<<"->";


}
int main(){
    linklist l1;
   l1. inserttail(1);
      l1. inserttail(2);
         l1. inserttail(3);
            l1. inserttail(4);
               l1. inserttail(5);
                  l1. inserttail(6);
                  l1.display();
                  reverse(l1.head);

}
