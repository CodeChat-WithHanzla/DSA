#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class LinkedList
{
    Node *head = nullptr;

public:
    void insertAtEnd(int n)
    {
        Node *newNode = new Node(n);
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
        }
    }
    void print()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void insertAtStart(int n)
    {
        Node *newNode = new Node(n);
        newNode->next = head;
        head = newNode;
    }
    int size()
    {
        Node *temp = head;
        int count = 0;
        while (temp)
        {
            count++;
            temp = temp->next;
        }
        return count++;
    }
    void insertAtPos(int n, int pos)
    {
        if (pos < 1 || pos > size())
        {
            cout << "Invalid Position" << endl;
            return;
        }
        Node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(n);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void deleteAt(int n)
    {
        if (n > size())
        {
            cout << "Invalid Position" << endl;
            return;
        }
        if (n == 1)
        {
            Node *toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }
        Node *temp = head;
        for (int i = 1; i < n - 1; i++)
        {
            temp = temp->next;
        }
        Node *toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }
    void reverse()
    {
        Node *current = head;
        Node *prev = nullptr;
        while (current)
        {
            Node *next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    void menu()
    {
        int choice, value, position;

        do
        {
            cout << "\nMenu:\n";
            cout << "1. Insert at End\n";
            cout << "2. Insert at Start\n";
            cout << "3. Print List\n";
            cout << "4. Get List Size\n";
            cout << "5. Reverse the List\n";
            cout << "6. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter value to insert at end: ";
                cin >> value;
                insertAtEnd(value);
                break;

            case 2:
                cout << "Enter value to insert at start: ";
                cin >> value;
                insertAtStart(value);
                break;

            case 3:
                cout << "Linked List: ";
                print();
                break;

            case 4:
                cout << "List Size: " << size() << endl;
                break;
            case 5:
                cout << "Reversing the List..." << endl;
                reverse();
                break;
            case 6:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
            }

        } while (choice != 5);
    }
};
class LinkedListMenu
{
public:
    void startMenu()
    {
        LinkedList *list = nullptr; // Pointer to manage dynamic LinkedList
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
                    list = new LinkedList();
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