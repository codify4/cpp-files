#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
typedef Node* nodePtr;

void insert(nodePtr& head, int x){
    nodePtr tempPtr;
    tempPtr = new Node;
    tempPtr -> data = x;
    tempPtr -> next = head;
    head = tempPtr;
}
void print(nodePtr head){
    nodePtr tempPtr;
    tempPtr = head;
    while(tempPtr -> next != NULL){
        cout << tempPtr -> data << " ";
        tempPtr = tempPtr -> next;
    }
    cout << endl;
}

void getNodeIndex(nodePtr head, int x){
    nodePtr tempPtr;
    tempPtr = head;
    int index = 0;
    while(tempPtr -> next != NULL){
        if(tempPtr -> data == x){
            cout << "INDEX: " << index << endl;
        }
        index++;
        tempPtr = tempPtr -> next;
    }
}

void deleteNode(nodePtr head, int x){
    nodePtr tempPtr;
    tempPtr = head;
    int index = 0;
    while(tempPtr -> next != NULL){
        if(tempPtr -> data == x){
            tempPtr -> next = tempPtr -> next -> next;
            break;
        }
        index++;
        tempPtr = tempPtr -> next;
    }
}

int main(){
    int n, x, del;
	nodePtr head;
    head = new Node;
    head -> next = NULL;

    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Enter the element: ";
        cin >> x;
        insert(head, x);
    }
    print(head);
    //getNodeIndex(head, 121);


    cout << "Type elemet to be deleted: ";
    cin >> del;
    deleteNode(head, del);

    cout << "AFTER DELETION: ";
    print(head);
}