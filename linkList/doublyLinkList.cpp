#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};
class DoublyList {
    Node *head;
    Node *tail;

public:
    DoublyList() {
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode ;
        }else{
            newNode->next = head ;
            head->prev = newNode ;
            head = newNode ;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (tail == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Remove from front
    void pop_front() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        if (head == tail) { // only one node
            head = tail = NULL;
        } else {
            head = head->next;
            head->prev = NULL;
        }
        delete temp;
    }

    // Remove from back
    void pop_back() {
        if (tail == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = tail;
        if (head == tail) { // only one node
            head = tail = NULL;
        } else {
            tail = tail->prev;
            tail->next = NULL;
        }
        delete temp;
    }


    void print(){
        Node* temp = head ;

        while (temp != NULL){
           cout << temp->data << " <=> " ;
           temp = temp->next ;
        }
        cout<< "NULL\n" ; 
    }

};

int main() {
    DoublyList ll;

    ll.push_front(10);
    ll.push_front(20);
    ll.push_back(30);
    ll.push_back(40);

    cout << "After push_front & push_back: ";
    ll.print();

    ll.pop_front();
    cout << "After pop_front: ";
    ll.print();

    ll.pop_back();
    cout << "After pop_back: ";
    ll.print();

    return 0;
}