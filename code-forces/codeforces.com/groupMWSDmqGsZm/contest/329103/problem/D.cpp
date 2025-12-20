
// with function
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,count=0;
	cin >> a;
	vector <int> v;
	for(int i = 0 ; i<a ; i++){
	    int x;
	    cin >> x;
	    v.push_back(x);
    }
	for(int x : v){
	    for(int i=0 ; i<a ; i++){
	        if(v[i] == x+1){
	            count++;
	            break;
	        }
	    }
	}
	cout << count;
	return 0;

}
// without function

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,cnt=0;
	cin >> a;
	vector <int> v;
	for(int i = 0 ; i<a ; i++){
	    int x;
	    cin >> x;
	    v.push_back(x);
    }
	for(int x : v){
        if(find(v.begin(), v.end(), x + 1) != v.end()){
            cnt++;
        }
    }

	cout << cnt;
	return 0;

}

