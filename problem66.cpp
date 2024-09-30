//PROGRAM TO CHECK WHETHER THE LINKED LIST IS PALINDROM OR NOT.
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node();
};
node::node()
{
    cout<<"Enter the data: ";
    cin>>data;
    next = 0;
}


class linkedList
{
    node* head;
    node* temp;
    node* newNode;
    public:
    linkedList();
    void createList();
    void display();
    node *getMid();
    node *reverse(node*);
    void check(node*);
};
linkedList::linkedList()
{
    head = 0;
    temp = 0;
    newNode = 0;
}

void linkedList::createList()
{
    int choice = 1;
    while(choice)
    {
        newNode = new node;
        if(head == 0)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        cout<<"To contine press 1 else 0: ";
        cin>>choice;
    }
}

void linkedList:: display()
{
    cout<<"linkedList: ";
    temp = head;
    while(temp!= 0)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

node* linkedList::getMid()
{
    node *slow = head;
    node *fast = head->next;
    while(fast!=0 && fast->next!=0)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node* linkedList::reverse(node* head)
{
    node *curr = head;
    node *prev = 0;
    node *next = 0;
    while(curr!=0)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void linkedList::check(node *middle)
{
    temp = head;
    node* temp1 = middle->next;
    bool isPalindrom = 1;
    if(temp == 0 || temp->next == 0)
    {
        cout<<"Palindrom"<<endl;
        return;
    }
    while(temp1!=0)
    {
        if(temp1->data != temp->data)
        {
            isPalindrom = 0;
            break;
        }
        temp1 = temp1->next;
        temp = temp->next;
    }
    if(isPalindrom)
    cout<<"Palindrom"<<endl;
    else
    cout<<"Not Palindrom"<<endl;
}

int main()
{
    linkedList l;
    l.createList();
    l.display();
    //getting the mid node of linkedList
    node *middle = l.getMid();
    //reversing the linkedList from the next node of middle
    middle->next = l.reverse(middle->next);
    // cout<<middle->data<<endl;mid successful
    l.display();
    //checking the Palindrom
    l.check(middle);
    //regetting the original linkedList
    middle->next = l.reverse(middle->next);
    l.display();
    return 0;
}