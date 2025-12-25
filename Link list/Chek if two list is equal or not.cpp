#include <bits/stdc++.h>
using namespace std;
class Node {
    public :
    int val;
    Node * next;
    Node (int val) {
        this -> val = val;
        this -> next = NULL;
    }
};
class linkList {
    private: 
        Node * head ;
        Node * tail ;
        
    public : 
        linkList () {
            head = tail = NULL ;
        }
        
        void push_back(int val ) {
            Node * newNode = new Node(val);
            if(head == NULL) {
                head = tail = newNode;
            }
            else {
                tail -> next = newNode;
                tail = newNode;
            }
        }
        
        void input(linkList ll) {
            while (true) {
                int val;
                cin >> val;
                if (val == -1){
                    break;
                }
                ll.push_back(val);
            }
        }
        
        int chek () {
            Node * temp = head ;
            int count = 0;
            while (temp != NULL) {
                count++;
                temp = temp-> next;
            }
            return count ;
        }
};
int main() {
	linkList ll1,ll2;
	ll1.input(ll1);
	ll2.input(ll2);
	int a= ll1.chek() , b= ll2.chek();
	cout << ((a==b) ? "YES" : "NO");
    return 0;
}
