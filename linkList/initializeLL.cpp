#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;

    Node(int val){
        data = val;
        next = NULL;
    } 
};

class List{
    Node* head;
    Node* tail;

public:
   List(){
      head = tail = NULL ;
   }

   void push_front(int val){
     Node* newNode = new Node(val);
     if(head == NULL){
         head = tail = newNode ;
         return;
     } else{
        newNode->next = head ;
        head = newNode ; 
     }
   }

   void push_back(int val){
     Node* newNode = new Node(val);

     if(head == NULL){
       head = tail = newNode ;
     } else {
        tail-> next = newNode;
        tail = newNode ;
     }
   }

   void pop_front(){
     if(head == NULL){
        cout  << "LL is Empty" << endl;
        return ;
     }

     Node* temp = head ;
     head = head -> next ;
     temp -> next = NULL ;

     delete temp;
   }

   void pop_back(){
    if(head == NULL){
        cout  << "LL is Empty" << endl;
        return ;
     }

     Node* temp = head ;
     while (temp->next != tail) {
        temp = temp->next ;
     }

     temp -> next = NULL;
     delete tail;
     tail = temp;      
   }

   void insert(int val, int pos){
      if(pos < 0){
        cout << "Invalid Position" << endl ;
      }
      if(pos == 0){
        push_front(val);
        return;
      }

      Node* temp = head ;
      for( int i=0 ; i<pos-1 ; i++ ){
        if(temp == NULL){
            cout<< "Invalid Position" << endl ;
            return ;
        }
        temp = temp->next ;
      }

      Node* newNode = new Node(val) ;
      newNode->next = temp->next ;
      temp->next = newNode ;

   }

   int search( int key){
      Node* temp = head;
      int position = 0;
      while( temp != NULL ){
         if(temp->data == key){
            return position;
         }
         temp= temp->next ;
         position++;
      }
     return -1; 
   }

   void printLL(){

    Node* temp = head;
    while (temp != NULL){
        cout << temp->data << " " ;
        temp = temp->next ;
    }
    cout<< endl;
   }

};

int main(){

    List ll ;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
   
    // ll.push_back(4);
    // ll.push_back(5);  

    ll.printLL();

    // ll.pop_front();
    // ll.pop_back();

    ll.insert(10, 1);
    ll.insert(100, 1);

    ll.insert(55, 5);
    ll.insert(10, 0);
    ll.insert(10, 10);

    ll.printLL();

    int key = ll.search(55);
    cout<< key ;

  return 0 ;
}