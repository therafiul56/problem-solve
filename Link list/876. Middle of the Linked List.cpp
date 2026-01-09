#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        char c;
        cin >> c;
        if(c == '=') break;
    }
    vector <int> v;
    while(true) {
        char c;
        cin >> c ;
        if (c==']') break;
        int a;
        cin >> a;
        v.push_back(a);
    }
	list <int> l;
	for (auto a : v){
	    l.push_back(a);
	}
	int s = l.size();
	if(s%2==0) {
	   int p=((s/2));
	   cout << "[" << *next(l.begin(),p) ;
	   for (int i=p+1 ; i<s ; i++) {
	       cout << "," << *next(l.begin(),i) ;
	   }
	   cout << "]";
	}
	else {
	    int p=((s/2));
	   cout << "[" << *next(l.begin(),p) ;
	   for (int i=p+1 ; i<s ; i++) {
	       cout << "," << *next(l.begin(),i) ;
	   }
	   cout << "]";
	}
	
	return 0;

}
