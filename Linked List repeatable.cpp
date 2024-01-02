#include <iostream>
using namespace std;


struct Node{
int data;
Node* next;

};

Node * head = NULL;


void addNode(int data){
   Node*clonenode = new Node;
    clonenode->data = data;
    clonenode->next = NULL;
if (head == NULL){

    head = clonenode;
}
else{

    Node*tempclone = head;
    while(tempclone->next != NULL){
        tempclone = tempclone->next;
    }
    tempclone->next = clonenode;
}

}


void delNode(int key){
Node*prev;
Node*newone = head;


if(newone->data==key&&newone!=NULL){
    head = newone->next;
    free(newone);
    return;
}

while(newone->data!=key&&newone!=NULL){
           prev=newone;
        newone=newone->next;


}

prev->next=newone->next;
free(newone);



}


void showNode(){

    Node*tempnode = head;
    while(tempnode!=NULL){
        cout<<tempnode->data<< " ";
        tempnode = tempnode->next;
    }


}

int main(){

addNode(1);
addNode(2);
addNode(3);
delNode(1);
showNode();



return 0;
}
