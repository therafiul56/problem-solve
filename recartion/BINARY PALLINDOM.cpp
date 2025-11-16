#include <bits/stdc++.h>
using namespace std;
int binary_convo(int bar){
    int deci = bar;
    if(deci/2==0){
        
        return deci%2;
    }
    return (binary_convo(bar/2)*10 + (deci % 2))  ;
}
int chek_pallindom(int a){
    int b=a,pal = 0;
    while(b>0){
        pal = pal*10 + b%10;
        b=b/10;
    }
    return pal;
}
int main() {
    	int deci;
    	cin >> deci;
    	int rem =  binary_convo(deci);
    	int pal =  chek_pallindom(rem);
    	if(rem == pal )cout << "YES";
    	else cout << "NO";
		return 0;
 
}
