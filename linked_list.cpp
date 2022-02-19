#include <iostream>

using namespace std; 

class node {
    public: 
    int val; 
    node* next; 
    node(int v, node* p = NULL) : val(v), next(p){}
};

    class linkedlist 
    {
        private:
        node *head, *tail;
       
        void reverse(node *p)
        {
         if (p->next == NULL) return; // O(N)
         reverse(p -> next);
         p -> next -> next = p;
         p -> next = NULL;
            
        }

        public:        
        linkedlist() : head(NULL), tail(NULL) {}

        void reverse()
        {
            reverse(head);
            swap(head,tail);
        }

        void insert_at_tail(int k) 
        {
            node *newnode = new node(k);
            /* replaced by constructor on line 9 - 12
            newnode -> val = k;
            newnode -> next = NULL;
            */

            if (head == NULL)
            {
            head = tail = newnode;
            }
            else
            {
                tail->next = newnode;
                tail = newnode;
            }
        };

        void insert_at_head(int k)
        {
            /* node *p = new node (k, head);
                this was replaced by the code on line 45 */
            head = new node (k, head);
            if (tail == NULL) tail = head; // empty linked list, if tail is null should be pointing to head
        };

        void delete_from_head()
        {
            if (head == NULL)
            {
                throw "ERROR: Can't Delete An Empty Linked List";
            }
            node *p = head; //*p == value of p; p = the actual pointer
            head = head -> next;
            delete p;
            if (head == NULL) tail = NULL;
        };

         void delete_from_tail()
        {
            if (head == NULL)
            {
                throw "ERROR: Can't Delete An Empty Linked List";
            }
            else if (head == tail)
            {
                delete tail;
                head = tail = NULL;
            }
            else
            {
                node *p = head;
                while(p -> next != tail) p = p-> next;
                p-> next = NULL;
                delete tail;
                tail = p;
            }
        };

        int& get(int k) //returns the k'th node in the linked list; O(N)
        {
            //try to find node in linked list, if cannot be found then return an error
            node *p = head;
            for (int i = 0; i < k; i ++) //
            {
                if (p == NULL) throw "ERROR";
                p = p->next;
            }
            if (p == NULL) throw "ERROR";
            return p->val;
        }

        void print ()
        {
            node *p = head;
                while (p != NULL)
                {
                    cout << p->val << " -> ";
                    p = p -> next;
                }
            cout << "NULL" << endl;
        };

        int& operator[] (int k) //O(N)
        {
            return get(k);
        }
    };

int main ()
{
    linkedlist L;
    
    L.insert_at_head(5);
    L.insert_at_head(3);
    L.insert_at_head(7);
    L.insert_at_head(2);

    L.reverse();


    cout << "\n" << "Linked List: ";
    L[3] = 200; //iterating through the linked list to update the value - o(n) operation
    L.print();
    cout << "\n";
    cout<<"The 2nd node in the linked list is " << L[1] << endl;
    cout<<"The 4th node in the linked list is " << L[3] << endl;

    cout << "Done" << "\n" << endl;
    return 0;
}