#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

//insert using recursion
Node* Create_linkedlist(int arr[], int n, int index, Node* prev) {
    if (index == n) {
        return NULL;
    }
    Node* temp;
    temp = new Node(arr[index]);
    temp->next = prev;
    return Create_linkedlist(arr, n, index + 1, temp);
}

int main() {
    Node* Head, * tail;
    tail = Head = NULL;
    int arr[] = { 2, 4, 6, 8, 10 };
    Head = Create_linkedlist(arr, 5, 0, NULL);
    
    // Insert at a particular index
    int x = 3;
    int value = 30;
    Node* temp = Head;
    while (--x && temp != NULL) {
        temp = temp->next;
    }
    // Check if index is valid
    if (temp != NULL) {
        // Inserting element
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    else {
        cout << "Invalid index!" << endl;
    }
    
    // Print elements
    Node* printTemp = Head;
    while (printTemp != NULL) {
        cout << printTemp->data << endl;
        printTemp = printTemp->next;
    }

    return 0;
}
