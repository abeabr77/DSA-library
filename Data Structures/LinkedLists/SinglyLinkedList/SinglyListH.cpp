#include <iostream>
using namespace std;

struct Node
{
    int value = 0;
    Node *next = nullptr;

    Node();
    Node(int value) : value(value) {};
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {};
    LinkedList(Node *head) : head(head) {};

    void Traversal()
    {
        Node *currentNode = head;
        cout << "Traversal: ";
        while (currentNode)
        {
            cout << currentNode->value;
            currentNode = currentNode->next;
        }
        cout << endl;
    };

    bool Search(int target)
    {
        Node *currentNode = head;
        int index = 0;
        while (currentNode)
        {
            if (currentNode->value == target)
            {
                cout << "Node found at index " << index << endl;
                return true;
            }
            else
            {
                currentNode = currentNode->next;
                index++;
            }
        }
        cout << "Node was not found" << endl;
        return false;
    }

    void Insert(int value)
    {
        Node *newNode = new Node(value);

        // Inserting at head
        if (!head)
        {
            head = newNode;
        }
        else
        {
            Node *currentNode = head;

            while (currentNode->next != nullptr)
            {
                currentNode = currentNode->next;
            }
            currentNode->next = newNode;
        }
    }

    bool Delete(int value)
    {
        if (!head)
        {
            return false;
        }

        // Delete head
        if (head->value == value)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return true;
        }

        Node *currentNode = head;
        Node *temp = nullptr;

        while (currentNode->next != nullptr && currentNode->next->value != value)
        {
            currentNode = currentNode->next;
        }

        if (!currentNode->next)
        {
            return false;
        }

        temp = currentNode->next;
        currentNode->next = currentNode->next->next;
        delete temp;
        return true;
    }
};

int main()
{
    cout << "hello" << endl;
    LinkedList list;

    for (int i = 0; i <= 5; i++)
    {
        list.Insert(i);
    }

    list.Traversal();
    list.Search(2);
    list.Delete(2);

    list.Traversal();
    return 0;
}
