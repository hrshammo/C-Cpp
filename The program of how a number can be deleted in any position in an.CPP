#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{

public:
    Node *head;
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

    int pop_at(struct Node **head_ref, int position)
    {
        if (*head_ref == NULL)
            return 2;

        struct Node *temp = *head_ref;

        if (position == 0)
        {
            return 1;
        }
        else if (position < 0)
        {
            return -1;
        }
        else if (position == 1)
        {
            *head_ref = temp->next;
            free(temp);
            return 2;
        }
        else
        {
            for (int i = 1; temp != NULL && i < position - 1; i++)
                temp = temp->next;

            if (temp == NULL || temp->next == NULL)
                return 2;

            struct Node *next = temp->next->next;

            free(temp->next);

            temp->next = next;
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
    MyList.push_back(40);
    MyList.push_back(50);
    MyList.push_back(60);
    MyList.push_back(70);
    MyList.push_back(80);
    MyList.PrintList();

    bool b = true;
    while (b)
    {
        cout << "Enter position from where you want to delete the value: ";
        cin >> p;
        int res = MyList.pop_at(&MyList.head, p);
        if (res == 1)
        {
            cout << "Invallid Position!\nPosition Should be >=1\n";
        }
        else if (res == -1)
        {
            b = false;
        }
        else
        {
            cout << "Value deleted from position " << p << " complete\n";
            MyList.PrintList();
        }
    }

    return 0;
}