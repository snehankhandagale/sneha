#include<iostream>
using namespace std;
 
 struct Node
 {
 	int data;
 	Node*next;

 };
    Node*head = NULL;
    
    void insertbiginning(int value)
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
		  cout<<"null";
		
	 }
	   int main()
	   {
	   	 insertbeginning(30);
	   	 insertbeginning(20);
	   	 insertbeginning(10);
	   	 
	   	 display();
	   	 
	   	 return 0;
	   }
