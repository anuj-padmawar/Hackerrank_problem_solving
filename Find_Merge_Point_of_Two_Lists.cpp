#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 int getCount(SinglyLinkedListNode* head)
{
  SinglyLinkedListNode* current = head;
  int count = 0;

  while (current != NULL)
  {
    count++;
    current = current->next;
  }

  return count;
}

int getNode(int d,SinglyLinkedListNode* head1,SinglyLinkedListNode* head2)
{
  int i;
  SinglyLinkedListNode* current1 = head1;
  SinglyLinkedListNode* current2 = head2;

  for(i =0;i<d;i++)
  {
    if(current1 == NULL)
    {  return -1; 
    }
    current1 = current1->next;
  }

  while(current1 !=  NULL && current2 != NULL)
  {
    if(current1 == current2)
      return current1->data;
    current1= current1->next;
    current2= current2->next;
  }

  return -1;
}
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

  int c1=getCount(head1);
  int c2=getCount(head2);
  int d;

  if(c1 > c2)
  {
    d = c1 - c2;
    return getNode(d, head1,head2);
  }
  else
  {
    d = c2 - c1;
    return getNode(d, head2, head1);
  }
}

int main()
