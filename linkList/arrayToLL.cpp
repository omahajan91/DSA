#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
    
    public:
    Node(int val){
        data = val;
        next = NULL;
    } 
};

Node* convertArray(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i= 1; i<arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main(){

   vector<int> arr= {2,5,6,8,9} ;
   Node* head = convertArray(arr);

   cout << head->data << endl ;
   cout << head->next << endl ;
   cout << head->next->data ;
   
}