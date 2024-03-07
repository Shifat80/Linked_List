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

int main(){
    Node *Head ,*tail;
    tail = Head = NULL;
    int arr[] = {2, 4, 6, 8, 10};
    //inserting element at end
    //if element not exist
    for(int i = 0; i < 5; i++){
        if (!Head){
            Head = new Node(arr[i]);
            tail=Head;
        }
    //if element exist
        else{
            tail->next = new Node(arr[i]);
            tail=tail->next;
        }
    }
    
    Node *temp = Head; // Initialize temp with Head
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }

}