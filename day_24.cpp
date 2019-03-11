#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Node
{
  public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class Solution
{
  public:
    Node *removeDuplicates(Node *head)
    {
        vector<int> seen;
        Node *current = head;
        Node *prev = NULL;
        while (current != NULL)
        {
            if (find(seen.begin(), seen.end(), current->data) != seen.end())
            {
                prev->next = current->next;
                delete (current);
            }
            else
            {
                seen.push_back(current->data);
                prev = current;
            }
            current = prev->next;
        }
        return head;
    }

    Node *insert(Node *head, int data)
    {
        Node *p = new Node(data);
        if (head == NULL)
        {
            head = p;
        }
        else if (head->next == NULL)
        {
            head->next = p;
        }
        else
        {
            Node *start = head;
            while (start->next != NULL)
            {
                start = start->next;
            }
            start->next = p;
        }
        return head;
    }
    void display(Node *head)
    {
        Node *start = head;
        while (start)
        {
            cout << start->data << " ";
            start = start->next;
        }
    }
};

int main()
{
    Node *head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while (T-- > 0)
    {
        cin >> data;
        head = mylist.insert(head, data);
    }
    head = mylist.removeDuplicates(head);

    mylist.display(head);
}