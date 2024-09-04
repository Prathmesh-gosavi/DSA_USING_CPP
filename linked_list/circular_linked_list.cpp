#include<iostream>
using namespace std;

class node
{
public:

	int data;
	node *next;

	node(int val) : data(val), next(nullptr) {}
};

class linkedlist
{
public:

	node *head;

	linkedlist():head(nullptr){}

	void create(int n)
	{
		int data;

		cout<<"enter the data:";
		cin>>data;
	    head = new node(data);
	    node *last=head;

	    for(int i=2;i<=n;++i)
	    {
	    	cout<<"enter the data:";
			cin>>data;
			last->next =new node(data);
			last=last->next;
	    }
	    last->next=head;
	    
	}

	void display()
	{
		node *temp;
		temp=head;

		do
		{
			cout<<" data :"<<temp->data<<endl;
			temp=temp->next;
		}while(temp!=head);
		
			
	}

	void eraseall()
	{
		node *temp;

		temp=head;
		head=head->next;
		temp->next=nullptr;


		while(head!=nullptr)
		{
			temp=head;
			head=head->next;
			delete temp;
		}
	}

	~linkedlist(){
	 eraseall();
}

};

int main()
{

	linkedlist list;

	int n;

	cout<<"how many node";
	cin>>n;

	list.create(n);

	list.display();

	list.eraseall();		

	
	
	  if (list.head == nullptr) {
       cout << "All memory is freed." << endl; }


	return 0;
}