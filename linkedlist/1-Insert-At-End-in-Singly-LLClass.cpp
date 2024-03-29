//#include<iostream>
//using namespace std;
//
//class Node{    //User defined data type
//    public:
//    int val;
//    Node* next;
//    Node(int val){
//        this->val=val;
//        this->next=NULL;
//    }
//};
//
//class LinkedList{   //user defined data structure
//    public:
//    Node* head;
//    Node* tail;
//    int size;
//    LinkedList(){
//        head=NULL;
//        tail=NULL;
//        size=0;
//    }
//
//    void insertAtEnd(int val){
//        Node* temp= new Node(val);
//        if(size==0){
//            head=tail=temp;
//        } 
//        else{
//            tail->next=temp;
//            tail=temp;
//        }
//        size++;
//    }
//
//    void display(){
//        Node* temp=head;
//        while(temp!=NULL){
//            cout<<temp->val<<" ";
//            temp=temp->next;
//        }
//    }
//
//};
//
//int main()
//{
//    LinkedList ll= LinkedList();
//    ll.insertAtEnd(20);
//    ll.insertAtEnd(30);
//    ll.display();
//    return 0;
//}





#include<iostream>
using namespace std;
class Node{
	public:
		int val;
		Node* next;
		Node(int val){
			this->next=NULL;
			this->val=val;
		}
};
class LinkedList{
	public:
	Node *head;
	Node *tail;
	int size;
	int linkedlist(){
		head=NULL;
		tail=NULL;
		size=0;
	}
	void insertat_end(int val)
	{
		Node *temp = new Node(val);
		if(size==0){
			head=tail=temp;
			
		}
		else{
			tail->next=temp;
			tail=temp;
		}
		size++;
	}
	void display(){
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->val<<" ";
			temp=temp->next;
		}
	}
};
int main(){
	LinkedList ll=LinkedList();
	ll.insertat_end(30);
	ll.insertat_end(40);
	ll.insertat_end(50);
	ll.display();
}

