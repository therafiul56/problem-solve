#include <bits/stdc++.h>
#define f0(n)  for(int i = 0 ; i<n ; i++)
using namespace std;
class Node {
    public :
        int val;
        Node * next;
        Node (int val) : val(val) ,next(nullptr) {}
};

class linkList {
    private :
    Node * head ;
    Node * tail ;
    
    public :
    linkList() {
        head = tail = nullptr;
    }
    
    void push_back(int val) {
        Node * newNode = new Node (val);
        if(head == nullptr) {
            head = tail = newNode;
        }
        else {
            Node * temp = head;
            while(temp!=tail) {
                temp = temp->next;
            }
            temp->next = newNode;
            tail = newNode;
        }
    }
    
    void push_at(int val,int idx) {
        Node * newNode = new Node (val);
         if(idx == 0) {
             newNode->next = head;
             head = newNode ;
             return;
         }
      
         Node * temp = head;
         f0(idx-1){
             temp = temp->next ;
         }
         newNode->next = temp->next;
         temp->next = newNode ;
    } 
    void print() {
        Node * temp = head ;
        while (temp!=nullptr) {
            // cout << "1";
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
    
    int size() {
        Node * temp = head ;
        int count = 0;
        while (temp!=nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main() {
	linkList ll;
	while(true) {
	    int a ;
	    cin >> a ;
	    if(a==-1) break;
	    ll.push_back(a);
	}
	int t ; cin >> t;
	while(t--){
	    int idx,val,len = ll.size();
	    cin >> idx >> val;
	    if ( idx > len ) {
	        cout << "invalid\n";
	    }
	    
	    else if (idx <= len) {
	        ll.push_at(val,idx);
	        ll.print();
	    }
	    
	}
    return 0;

}
