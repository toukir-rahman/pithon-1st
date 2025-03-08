#include<iostream>
using namespace std;

class node {
public:
    int val;
    node* next;
    node(int value){
        this->val = value;
        this->next = nullptr;
    }
    node(node* next){
        this->next =next;
    }
};

class LinkList{
public:
    node* head;
    node* tail;
    LinkList(){
        head = nullptr;
        tail= nullptr;
    }
    void insertInFront(int value){
        node* newnode = new node(value);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else {
            newnode -> next = head;
            head = newnode;
        }
    }
};

void printlist(LinkList abc){
    node* temp = abc.head;
    while (temp != nullptr){
        cout<<temp-> val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    LinkList abc;
    abc.insertInFront(5);
    abc.insertInFront(10);
    printlist(abc);

    return 0;

}
