#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void push_back(int newElement)
    {
        Node *newNode = new Node();
        newNode->data = newElement;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    int push_at(int newElement, int position)
    {
        Node *newNode = new Node();
        newNode->data = newElement;
        newNode->next = NULL;

        if (position < 1)
        {
            return -1;
        }
        else if (position == 1)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i < position - 1; i++)
            {
                if (temp != NULL)
                {
                    temp = temp->next;
                }
            }

            if (temp != NULL)
            {
                newNode->next = temp->next;
                temp->next = newNode;
            }
            else
            {
                cout << "\nThe previous node is null.";
            }
        }
    }

    void PrintList()
    {
        Node *temp = head;
        if (temp != NULL)
        {
            cout << "The list contains: ";
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        else
        {
            cout << "The list is empty.\n";
        }
    }
};

int main()
{
    int h, n, p;
    LinkedList MyList;
    MyList.push_back(10);
    MyList.push_back(20);
    MyList.push_back(30);
    MyList.PrintList();

    cout << "How many value you want to insert: ";
    cin >> h;
    bool b = true;
    while (b)
    {
        cout << "Enter value to insert: ";
        cin >> n;
        cout << "Enter position: ";
        cin >> p;
        int rs = MyList.push_at(n, p);
        if (rs == -1)
        {
            cout << "\nInvalid position!\nposition should be >= 1\n";
        }
        else
        {
            cout << "Insert at position " << p << " complete." << endl;
            h--;
            MyList.PrintList();
        }
        if (h == 0)
        {
            b = false;
        }
    }

    return 0;
}