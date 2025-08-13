#include <iostream>
using namespace std;


class Node {
    public:
        int* data;
        Node* next;
        Node* prev;
        
    public:
        Node(int data){
            this->data = new int(data);
            this->next = nullptr;
            this->prev = nullptr;
        }
   
    ~Node(){
        delete data;
    }
};


void displayList(Node*& head){

    Node* temp = head;

    while (temp != nullptr)
    {
        cout << *temp->data <<" -> " ;\
        temp = temp->next;
    }
    
}

void displayListInReverseOrder(Node*& tail){

    Node* temp = tail;

    while (temp != nullptr)
    {
        cout << *temp->data <<" -> " ;\
        temp = temp->prev;
    }
    
}


void insertAtStart(Node*& head,int data){

    Node* newNode = new Node(data);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}


void insertAtEnd(Node*& tail,int data){

    Node* newNode = new Node(data);

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}


void deleteFirst(Node *& head){

    Node* temp = head;
    
    head = head->next;
    head->prev = nullptr;

    delete temp;
}


void deleteLast(Node *& tail){

    Node* temp = tail;

    tail = tail->prev;
    tail->next = nullptr;

    delete temp;
}


int main(){
    Node* head = new Node(1);
    Node* tail = head;

    insertAtStart(head,100);
    insertAtStart(head,110);
    insertAtStart(head,120);
    insertAtEnd(tail,150);
    displayList(head);
    cout <<endl;
    // deleteFirst(head);
    deleteLast(tail);
    displayList(head);
    // displayListInReverseOrder(tail);

    return 0;
}