#include<iostream>
using namespace std;
//create One Node
class Node{
    public:
    int data;//data of node
    Node *next;//pointer to next node
    Node(int data){
        this->data=data;//initially data is equal to data
        next=NULL;//initially next is null

    }
};

int main(){
    Node *Head=NULL;//Head is a pointer
    //Head=NULL;
    //Insert at begining 
    
    int arr[]={2,4,6,8,10};
    for(int i=0;i<5;i++){
        if(Head==NULL){
            Head=new Node(arr[i]);//new node is created
        }
        else{
            Node *temp;//temp is created
            temp=new Node(arr[i]);//new node is created
            temp->next=Head;//new node is connected with head
            Head=temp;//head is connected with new node

        }
    }
    Node *temp=Head;//temp is connected with head
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;//temp is connected with next
    }
    
}
