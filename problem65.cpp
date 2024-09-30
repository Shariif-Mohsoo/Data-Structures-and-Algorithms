//write c++ program to reverse the linked list with k number of groups.
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

void create(node*&head,node *temp,node *newNode)
{
    head = 0;
    int choice = 1;
    while(choice)
    {
        newNode = new node;
        cout<<"Enter data: ";
        cin>>newNode->data;
        if(head == 0)
            temp = head = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        cout<<"To contine press 1 else 0: ";
        cin>>choice;
    }
}
void display(node *head)
{
    node* temp = head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

node* reverseK(node*head,int k)
{
    if(head == 0)
    {
        cout<<"Empty list"<<endl;
        return 0;
    }
    
    
    node *next = 0;
    node *curr = head;
    node *prev = 0;
    int count = 0;
    while(curr != 0 && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    if(next != 0)
       head->next =  reverseK(next,k);
    
    return prev;
}

int main()
{
    node *head,*temp,*newNode;
    create(head,temp,newNode);
    display(head);
    cout<<"Enter number for groups to reverse: ";
    int k; cin>>k;
    head = reverseK(head,k);
    cout<<"reverseK - ";
    display(head);
    return 0;
}