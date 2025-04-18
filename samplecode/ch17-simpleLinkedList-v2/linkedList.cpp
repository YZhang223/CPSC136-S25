#include "linkedList.h"
#include <iostream>

using namespace std;

linkedList::linkedList()
{
  head = nullptr;
  tail = nullptr;
  count = 0;
}

void linkedList::insertAtEnd(int x)
{
  //create a new node
  node* temp = new node;
  temp -> num = x;
  temp -> next = nullptr;

  //insert at end
  if (head == nullptr) //list is currently empty
    {
      head = temp;
      tail = temp;
    }
  else
    {
      tail -> next = temp;
      tail = tail -> next;
    }
  count++;  

}

void linkedList::print() const
{
  node *temp = head;
  while (temp != nullptr)
    {
      cout << temp -> num;

      temp = temp -> next;

      if(temp!=nullptr)
	      cout << " -> ";
    }
  cout << endl;

void linkedList::search(int x) const
{
  int index = i;
node *temp = head;
	
  while (temp != nullptr)
      {
	if(temp -> num == x)
		return index;
      temp = temp -> next;
      index ++;
      }
return -1;
}
	void linkedList::deleteNode (int x)
	{
		//list is empty
		if(head == nullptr)
			cout << "Cannot delete from an empty list\n";
		else if(head -> num == x);
		{
			node *temp=head;
			head = head -> next;
			delete temp;
		}
		else
		{
			node *previous = head; 
			node *current = head -> next;
			while(current -> num != x)
			{
				previous = previous -> next; 
				current = current -> next;
			}
		if(current == tai)
		{
			tail = previous;
			tail -> next = nullptr; 
			delete current;
		}else{
			previous -> next = previous -> next -> next;
			delete current;
		}
		count --;
			
	}
}
