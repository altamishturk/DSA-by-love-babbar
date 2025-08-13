#include <iostream>
#include <set>
#include <vector>
using namespace std;


class Node {
    public:
        int* data;
        Node* next;
        
    public:
        Node(int data){
            this->data = new int(data);
            this->next = nullptr;
        }

    ~Node(){
        delete data;
    }    
};

void displayList(Node* head){

    if(!head){
        cout <<"List is Empity!" <<endl;
        return;
    }

    Node* temp = head;

    cout <<"Start  ";

    while (temp != nullptr)
    {
        cout << *temp->data <<" -> ";
        temp = temp->next;
    }

    cout <<" End";
}

void insertAtFront(Node* &head,Node* &tail,int data){
    
    Node* newNode = new Node(data);
    
    if(head == nullptr){
        newNode->next = nullptr;
        tail = newNode;
    }
    else {
        newNode->next = head;
    }

    head = newNode;
}

int getLength(Node*& tail){

    Node* temp = tail;
    int len = 0;

    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    
    return len;
}

void insertAtBack(Node* &tail,Node* &head,int data){
    
    Node* newNode = new Node(data);
   
    
    if(tail == nullptr){
        tail = newNode;
        tail->next = nullptr;
        head = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAt(Node* &head,int data,int index){
    Node* newNode = new Node(data);
   
    Node*temp = head;

    int i = 1;

    while (i < index)
    {
        temp = temp->next;
        i++;

        if(temp->next == nullptr){
            break;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
}


void deleteFirst(Node* &head){
    Node* temp = head;
    head = head->next;
    delete temp;
}


void reverseLinkedList(Node*& head,Node*& tail){

    tail = head;
    Node * prev = nullptr;
    Node * curr = head;
    Node * next = nullptr;
   
    while (curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;   
    }
    
    head = prev;
}


Node* reverseK(Node*& head,int k){

    if(head == nullptr){
        return nullptr;
    }

    Node* prev = nullptr;
    Node* next = nullptr;
    Node* curr = head;
    int count = 0;
    Node* temp = head;

    while (temp != nullptr && count < k)
    {
        temp = temp->next;
        count++;
        if(temp == nullptr){
            return head;
        }
    }

    count = 0;

    while (curr != nullptr && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next){
        head->next = reverseK(next,k);
    }
    
    return prev;
}


Node* findIntersection(Node*& head){

    if(!head){
        return nullptr;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr)
    {
        fast = fast->next;

        if(fast != nullptr){
            fast = fast->next;
        }

        slow = slow->next;

        if(fast == slow){
            return slow;
        }
    }
    

    return nullptr;
}


Node* startOfLoop(Node*& head){
    Node* intersection = findIntersection(head);

    if(!intersection){
        return nullptr;
    }

    Node* slow = head;

    while (intersection != slow)
    {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeLoop(Node*& head){

    Node* loopStart = startOfLoop(head);

    if(!loopStart){
        return;
    }

    Node* temp = loopStart;

    while (temp->next != loopStart)
    {
        temp = temp->next;
    }
    
    temp->next = nullptr;
}


void removeDuplicateInSorted(Node*& head){
    Node* temp = head;

    while (temp != nullptr)
    {
        while (temp->next != nullptr && (*temp->next->data == *temp->data))
        {
            temp->next = temp->next->next;
        }
        
        temp = temp->next;
    }
}


void removeDuplicateInUnSorted(Node*& head){

    //// 1 approach 
    // Node* temp = head;
    // set<int> uniqueSet;

    // uniqueSet.insert(*temp->data);

    // while (temp != nullptr && temp->next != nullptr)
    // {
    //     if(uniqueSet.find(*temp->next->data) != uniqueSet.end()){
    //         if(temp->next->next){
    //             temp->next = temp->next->next;
    //         }
    //         else {
    //             temp->next = nullptr;
    //         }
    //     }
    //     else {
    //         uniqueSet.insert(*temp->next->data);
    //         temp = temp->next;
    //     }   
    // }

    // 2 approach 
    Node* curr = head;

    while (curr != nullptr)
    {
        Node* temp = curr;

        while (temp != nullptr)
        {
            if(temp->next != nullptr && (*curr->data == *temp->next->data)){
                Node* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;
            }
            else {
                temp = temp->next;
            }
        }

        curr = curr->next;
    }
    
}


void sort012(Node*&head){

    Node* temp = head;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    while (temp != nullptr)
    {
        if(*temp->data == 0){
            count0++;
        }
        else if(*temp->data == 1){
            count1++;
        }
        else {
            count2++;
        }
        temp = temp->next;
    }

    temp = head;

    while (temp != nullptr)
    {
        if(count0 > 0){
            temp->data = new int(0);;
            count0--;
        }
        else if(count1 > 0){
            temp->data = new int(1);
            count1--;
        }
        else {
            temp->data = new int(2);
            count2--;
        }
        temp = temp->next;
    }
}


// merge 2 sorted linked list and return one sorted 
Node* merge2SortedLinkedLists(Node*& head1,Node*& head2){

    // // approach 1 
    //// create new linkedlist and insert at tail the node which is less 
    // Node* temp1 = head1;
    // Node* temp2 = head2;

    // Node* newHead = nullptr;
    // Node* newTail = nullptr;

    // while (temp1 != nullptr && temp2 != nullptr)
    // {
    //     if(*temp1->data < *temp2->data){
    //         int data = *(temp1->data);
    //         insertAtBack(newTail,newHead,data);
    //         temp1 = temp1->next;
    //     }
    //     else {
    //         int data = *(temp2->data);
    //         insertAtBack(newTail,newHead,data);
    //         temp2 = temp2->next;
    //     }
    // }


    // while (temp1 != nullptr)
    // {
    //     int data = *(temp1->data);
    //     insertAtBack(newTail,newHead,data);
    //     temp1 = temp1->next;
    // }

    // while (temp2 != nullptr)
    // {
    //     int data = *(temp2->data);
    //     insertAtBack(newTail,newHead,data);
    //     temp2 = temp2->next;
    // }
    
    
    // return newHead;

    // approach 2 
    // insert 2 nd list number between curr and prev if it is in the middle 

    if(!head1){
        return head2;
    }
    if(!head2){
        return head1;
    }

    Node* prev = head1;
    Node* curr = head1->next;
    Node* temp = head2;
    int count = 0;

    while (temp != nullptr && curr != nullptr)
    {
        if(*curr->data >= *temp->data && *prev->data <= *temp->data){
            Node* nextTemp = temp->next;
            prev->next = temp;
            prev->next->next = curr;
            prev = prev->next;
            temp = nextTemp;
        }
        else {
            prev = curr;
            curr = curr->next;
        }
        count++;
    }

    if(!curr){
        prev->next = temp;
    }
    
    return head1;
}


bool isPalandrome(Node* &head){


    // // approach 1 
    //// time o of n
    //// space o of n
    // Node* temp = head;
    // vector<int> arr;

    // while (temp != nullptr)
    // {
    //     arr.push_back(*temp->data);
    //     temp = temp->next;
    // }

    // int start = 0;
    // int end = arr.size()-1;
    
    // while (start < end)
    // {
    //     if(arr[start] != arr[end]){
    //         return false;
    //     }
        
    //     start++;
    //     end--;
    // }
    
    // return true;


    // approach 2 
    // time is o of n 
    // space is o of 1

    if(!head){
        return true;
    }
    if(!head->next){
        return true;
    }

    // find middle 
    Node* slow = head;
    Node* fast = head->next;

    while (fast)
    {
        fast = fast->next;
        if(fast){
            fast = fast->next;
        }
        slow = slow->next;
    }

   
    Node* curr = slow->next;
    slow->next = nullptr;
    Node* prev = nullptr;
    Node* next = nullptr;

    // reverse after middle 
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    slow->next = prev;

    curr = slow->next;
    Node* temp = head;

    while (curr)
    {
        if(*curr->data != *temp->data){
            return false;
        }
        curr = curr->next;
        temp = temp->next;
    }


    curr = slow->next;
    slow->next = nullptr;
    prev = nullptr;
    next = nullptr;

    // reverse after middle 
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    slow->next = prev;

    return true;
}


void sumOfTwoLinkedList(Node* &l1, Node* l2){

    // reverse first one 
    Node* curr = l1;
    Node* prev = nullptr;
    Node* next = nullptr;
    int firstLen = 0;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        firstLen++;
    }


    Node* firstOneHead = prev;
    // reverse second one 
    curr = l2;
    prev = nullptr;
    next = nullptr;
    int secondLen = 0;

    Node* newHead = nullptr;
    Node* newtail = nullptr;


    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        secondLen++;
    }
    
    
    Node* firstTemp = nullptr;
    Node* secondTemp = nullptr;
    if(firstLen > secondLen){
        firstTemp = firstOneHead;
        secondTemp = prev;
    }
    else {
        firstTemp = prev;
        secondTemp = firstOneHead;
    }
    int carry = 0;

    while (firstTemp)
    {
        int sum = 0;

        if(secondTemp){
            sum = *firstTemp->data+*secondTemp->data+carry;
        }
        else {
            sum = *firstTemp->data+carry;
        }

        carry = sum/10;
        int remender = sum%10;

        insertAtBack(newtail,newHead,remender);

        firstTemp = firstTemp->next;
        secondTemp = secondTemp->next;
    }

    if(carry){
        insertAtBack(newtail,newHead,carry);
    }
    
    curr = newHead;
    prev = nullptr;
    next = nullptr;

    while (curr)
    {
        next = curr->next; // refrence for next 
        curr->next = prev; // link next to previous 
        prev = curr; // update prev 
        curr = next; // update next
    }
    
    displayList(prev);
}

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;

    // insertAtBack(tail,head,1);

    // tail->next = head->next;
    // displayList(head);
    // cout <<endl;
    // head = reverseK(head,3);
    // displayList(head);
    // cout <<endl;
    // cout <<findLoop(head);
    // Node* startOfTheLoop = startOfLoop(head);
    // cout <<*startOfTheLoop->data;
    // removeLoop(head);
    // displayList(head);

    // displayList(head);
    // cout <<endl;
    // removeDuplicateInSorted(head);
    // displayList(head);


    // displayList(head);
    // cout <<endl;
    // removeDuplicateInUnSorted(head);
    // displayList(head);


    // set<int> s = {1,2,3};

    // cout <<(s.find(3) != s.end());


    // insertAtBack(tail,head,0);

 
    // displayList(head);
    // cout <<endl;
    // sort012(head);
    // displayList(head);

    // Node* head1 = nullptr;
    // Node* tail1 = nullptr;

    // insertAtBack(tail,head,5);
    // insertAtBack(tail,head,20);
    // insertAtBack(tail,head,30);
    // insertAtBack(tail1,head1,10);
    // insertAtBack(tail1,head1,50);
    // insertAtBack(tail1,head1,100);

    // displayList(head);
    // cout <<endl;
    // displayList(head1);
    // cout <<endl;

    // Node* newHead = nullptr;

    // if(*head->data <= *head1->data){
    //     newHead = merge2SortedLinkedLists(head,head1);
    // }
    // else {
    //     newHead = merge2SortedLinkedLists(head1,head);
    // }
    
    // cout <<endl;
    // cout <<"final one: ";
    // displayList(newHead);


    // insertAtBack(tail,head,1);
    // insertAtBack(tail,head,2);
    // insertAtBack(tail,head,3);
    // insertAtBack(tail,head,4);
    // insertAtBack(tail,head,5);
    // insertAtBack(tail,head,4);
    // insertAtBack(tail,head,3);
    // insertAtBack(tail,head,2);
    // insertAtBack(tail,head,1);

    // bool pal = isPalandrome(head);

    // displayList(head);

    // if(pal){
    //     cout <<"Palandrome";
    // }
    // else {
    //     cout <<"Not Palandrome";
    // }

    Node* head1 = nullptr;
    Node* tail1 = nullptr;

    insertAtBack(tail,head,5);
    insertAtBack(tail,head,0);
    insertAtBack(tail1,head1,5);
    insertAtBack(tail1,head1,0);

    sumOfTwoLinkedList(head,head1);

    return 0;
}