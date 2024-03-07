#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }  
};
        //insert using recurion
Node* Create_linkedlist(int arr[],int n,int index){
    if(index == n){
        return NULL;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->next = Create_linkedlist(arr,n,index+1);
    return temp;
}
int main(){
    Node *Head ,*tail;
    tail = Head = NULL;
    int arr[] = {2, 4, 6, 8, 10};
    Head= Create_linkedlist(arr,5,0);
    
    //printing element
    Node *temp = Head; // Initialize temp with Head
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }

}