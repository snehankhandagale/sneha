#include<iostream>
using namespace std;
 
 struct Node
 {
 	int data;
 	Node*next;

 };
    Node*head = NULL;
    
    void insertEnd(int value)
    {
    	Node*newNode=new Node;
    	newNode->next=head;
    	head=newNode;
	}
	 void display()
	 {
	 	Node*temp=head;
	 	
	 	while(temp!=NULL)
	 	{
	 		cout<<temp->data<<"->";
	 		temp=temp->next;
		 }
		  cout<<"NULL";
		
	 }
	   int main()
	   {
	   	 insertEnd(40);
	   	 insertEnd(30);
	   	 insertEnd(20);
	   	 insertEnd(10);
	   	 
	   	 display();
	   	 
	   	 return 0;
	   }
