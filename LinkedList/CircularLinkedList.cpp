#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int n)
    {
        data = n;
        next = nullptr;
    }
};
class CircularLinkedList
{
public:
    Node *head = nullptr;
    Node *tail = nullptr;
    void insert(int data)
    {
        Node *newNode = new Node(data);
        if (!head)
        {
            head = newNode;
            tail = newNode;
            newNode->next = head;
        }
        else
        {
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }
    void print()
    {
        if (!head)
            return;
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
    void insertAtStart(int data)
    {
        Node *newNode = new Node(data);
        if (!head)
        {
            head = newNode;
            tail = newNode;
            newNode->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    int size()
    {
        if (head == nullptr)
            return 0;
        int count = 0;
        Node *temp = head;
        do
        {
            temp = temp->next;
            count++;
        } while (temp != head);
        return count;
    }
    void insertAtposition(int data, int pos)
    {
        if (pos < 1 || pos > size())
        {
            cout << "Invalid Position " << endl;
            return;
        }
        else if (pos == 1)
            insertAtStart(data);
        else if (pos == size() + 1)
            insert(data);
        else
        {
            Node *newNode = new Node(data);
            Node *temp = head;
            for (int i = 1; i < pos - 1; i++)
                temp = temp->next;
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    void deleteNode(int pos)
    {
        if (pos < 1 || pos > size())
        {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 1)
        {
            Node *temp = head;
            if (head == tail)
            {
                head = nullptr;
                tail = nullptr;
            }
            else
            {
                head = head->next;
                tail->next = head;
            }
            delete temp;
        }
        else if (pos == size())
        {
            Node *temp = head->next;
            while (temp->next != tail)
                temp = temp->next;
            Node *toDelete = tail;
            tail = temp;
            tail->next = head;
            delete toDelete;
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i < pos - 1; i++)
                temp = temp->next;

            Node *toDelete = temp->next;
            temp->next = toDelete->next;
            delete toDelete;
        }
    }
};
int main()
{
    CircularLinkedList list;
    list.insert(9);
    list.insert(10);
    list.insertAtStart(3);
    list.insertAtposition(7, 3);
    list.print();
    list.deleteNode(2);
    list.print();
}