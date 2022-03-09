// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
 
class Solution
{
public:
    Node *segregate(Node *head)
    {
        int zeros = 0, ones = 0, twos = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == 0)
            {
                zeros++;
            }
            if (temp->data == 1)
            {
                ones++;
            }
            if (temp->data == 2)
            {
                twos++;
            }
            temp = temp->next;
        }

        temp = head;
        while (temp != NULL)
        {
            if (zeros != 0)
            {
                temp->data = 0;
                zeros--;
            }
            else if (ones != 0)
            {
                temp->data = 1;
                ones--;
            }
            else if (twos != 0)
            {
                temp->data = 2;
                twos--;
            }
            temp = temp->next;
        }
        return head;
    }
};
