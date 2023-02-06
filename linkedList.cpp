
#include <iostream>
using namespace std;

struct Node{
    int data;     /*data field*/
    Node *next;   /*next pointer*/
    Node :: Node(int d, Node* n){
        d = data;
        n = next;
    }
};

int main(int argc, char* argv){
    //creates three empty Node objects 
    Node *head = nullptr;
    Node *first = nullptr;
    Node *second = nullptr;
    Node *third = nullptr;

    first = new Node();
    second = new Node();
    third = new Node();
    Node *fourth = new Node(30, nullptr);
    //don't move the head 
    head = first;

    //makes a linked list made of the nodes you made that looks like (5, 13, 27)
    first->data = 5;
    first->next = second;

    second->data = 13;
    second->next = third;

    third->data = 27;
    third->next = nullptr;

    //loops through to print out list 
    Node *current = head;
    while (current != nullptr){
        cout << current->data << endl;
        current = current->next;
    }

    //theroedical function to search for a linked list 
    Node* /*LinkedList::*/ serach(int val){
        Node* current = head;
        while (current != nullptr){
            if(current->data == val){
                return current;
            }
            current = current->data;
        }
        return nullptr;
    }

    //theroedical function to insert a new node
    int insertNode(int leftValue, initializer_list){
        Node *node = new Node(value);
        Node *left = serch(leftValue);   //left is pointer of the function t
        //if you are trying to add to front of list 
        if(left == head){
            node->next = head;
            head = node;
        }
        //if you are adding at the end of list
        else_if(left->next == 0){
            tail->next = node;
            tail = node;
        }

    }

    return 0;
}