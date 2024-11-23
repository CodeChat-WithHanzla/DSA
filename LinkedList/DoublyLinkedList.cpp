#include <iostream>
using namespace std;
class Node
{
public:
    Node *next, *prev;
    int data;
    Node(int n)
    {
        next = nullptr;
        prev = nullptr;
        data = n;
    }
};
class DoublyLinkedList
{
public:
    Node *head = nullptr;
    Node *tail = nullptr;
    ~DoublyLinkedList()
    {
        Node *current = head;
        while (current)
        {
            Node *nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = tail = nullptr;
    }

    void insert(int data)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        if (!head)
            head = newNode;
        else
        {
            Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }
    void print(int n)
    {
        if (n == 1)
        {
            Node *temp = head;
            while (temp)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        else if (n == -1)
        {
            Node *temp = tail;
            while (temp)
            {
                cout << temp->data << " ";
                temp = temp->prev;
            }
            cout << endl;
        }
        else
            cout << "Please give the valid order!" << endl;
    }
    void insertStart(int data)
    {
        Node *newNode = new Node(data);
        if (!head)
            head = newNode;
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    int size()
    {
        Node *temp = head;
        int count = 0;
        while (temp)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
    void insertAtPos(int n, int pos)
    {
        if (pos < 1 || pos > size())
        {
            cout << "Invalid Position" << endl;
            return;
        }
        if (pos == 1)
            insertStart(n);
        else if (pos == size() + 1)
            insert(n);
        else
        {
            Node *temp = head;
            for (int i = 1; i < pos - 1; i++)
                temp = temp->next;

            Node *newNode = new Node(n);
            newNode->prev = temp->prev;
            newNode->next = temp;
            temp->prev = newNode;
        }
    }
    void deleteNode(int pos)
    {
        if (pos < 1 || pos > size())
        {
            cout << "Invalid Position" << endl;
            return;
        }
        Node *temp = head;
        if (pos == 1)
            head = head->next;
        else if (pos == size())
            tail = tail->prev;
        else
        {
            for (int i = 1; i < pos; i++)
                temp = temp->next;
            Node *prev = temp->prev;
            Node *next = temp->next;
            prev->next = next;
            next->prev = prev;
            delete temp;
        }
    }
    void menu()
    {
        int choice, value, position;
        do
        {
            cout << "\nMenu:\n";
            cout << "1. Insert at End\n";
            cout << "2. Insert at Start\n";
            cout << "3. Insert at Position\n";
            cout << "4. Print List\n";
            cout << "5. Get List Size\n";
            cout << "6. Delete a node\n";
            cout << "7. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter value to insert at end: ";
                cin >> value;
                insert(value);
                break;

            case 2:
                cout << "Enter value to insert at start: ";
                cin >> value;
                insertStart(value);
                break;
            case 3:
                cout << "Enter the value : ";
                cin >> value;
                cout << "Enter the position : ";
                cin >> position;
                insertAtPos(value, position);
                break;
            case 4:
                cout << "Enter 1 for asc and -1 for desc order" << endl;
                cin >> value;
                cout << "Linked List: ";
                print(value);
                break;

            case 5:
                cout << "List Size: " << size() << endl;
                break;
            case 6:
                cout << "Enter the position of the node for deletion : ";
                cin >> position;
                deleteNode(position);
                break;
            case 7:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
            }

        } while (choice != 7);
    }
};
class LinkedListMenu
{
public:
    void startMenu()
    {
        DoublyLinkedList *list = nullptr;
        int option;

        do
        {
            cout << "\nMain Menu:\n";
            cout << "1. Create a LinkedList\n";
            cout << "2. Manage LinkedList\n";
            cout << "3. Delete LinkedList\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> option;

            switch (option)
            {
            case 1:
                if (list)
                {
                    cout << "LinkedList already created!\n";
                }
                else
                {
                    list = new DoublyLinkedList();
                    cout << "LinkedList created successfully!\n";
                }
                break;

            case 2:
                if (list)
                {
                    list->menu();
                }
                else
                {
                    cout << "Please create a LinkedList first.\n";
                }
                break;

            case 3:
                if (list)
                {
                    delete list;
                    list = nullptr;
                    cout << "LinkedList deleted successfully!\n";
                }
                else
                {
                    cout << "No LinkedList to delete.\n";
                }
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
            }

        } while (option != 4);
    }
};
int main()
{
    LinkedListMenu menu;
    menu.startMenu();
    return 0;
}