// TODO:  Write C++ program to sort the linked list using the merge sort
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node();
};
node ::node()
{
    cout << "Enter the data: ";
    cin >> data;
    next = 0;
}

class linkedList
{
    node *head;
    node *temp;
    node *newNode;

public:
    linkedList();
    void create(node *&);
    void display(node *);
    node *mergeSort(node *);
    node *findMid(node *);
    node *mergeLists(node *, node *);
    void performOperations();
};
linkedList::linkedList()
{
    head = 0;
    temp = 0;
    newNode = 0;
}

void linkedList::create(node *&head)
{
    int choice = 1;
    while (choice)
    {
        newNode = new node;
        if (head == 0)
            temp = head = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        cout << "To continue press 1 else 0: ";
        cin >> choice;
    }
}
void linkedList ::display(node *head)
{
    cout << "Linked list: ";
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void linkedList::performOperations()
{
    linkedList list;
    node *head = 0;
    list.create(head);
    list.display(head);
    // outside function
    node *newHead = list.mergeSort(head);
    list.display(newHead);
}

node *linkedList::findMid(node *head)
{
    node *slow = head;
    node *fast = head;
    cout << "Find Mid" << endl;
    while (fast != 0 && fast->next != 0)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *linkedList::mergeLists(node *left, node *right)
{
    if (left == 0)
        return right;
    if (right == 0)
        return left;
    cout << "Create the dummy node" << endl;
    node *ans = new node;
    node *temp = ans;
    while (left != 0 && right != 0)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    // if left linked list is big
    while (left != 0)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    // if right linked list is big
    while (right != 0)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    return ans->next;
}

node *linkedList::mergeSort(node *head)
{
    // base condition
    if (head == 0 || head->next == 0)
        return head;
    // mid
    cout << "In MergeSort" << endl;
    node *mid = findMid(head);
    node *left = head;
    node *right = mid->next;
    mid->next = 0;
    // recursive call to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);
    node *result = mergeLists(left, right);
    return result;
}

int main()
{
    linkedList l;
    l.performOperations();
    return 0;
}