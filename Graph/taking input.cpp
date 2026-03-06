#include <bits/stdc++.h>
using namespace std;
#define f0(n) for(int i = 0 ; i<n ; i++ ) 
#define fm(n,m) for(int i = 0 ;i<n ; i++) for(int j=0 ; j<m ; j++) 

int main() {
	int n,e;
	cin >> n >> e;
	int adj_mat[n][n];
	memset(adj_mat,0,sizeof(adj_mat));
	fm(n,n) {
	    if(i==j){
	        adj_mat[i][j]=1;
	    }
	}
	for(int i = 0 ; i<e ; i++){
	        int a,b; cin >> a >> b;
	        adj_mat[a][b] = 1;
	        adj_mat[b][a] = 1;
	    }
	for(int i = 0 ; i< n ; i++){
	    for( int j = 0 ; j< n ; j++){
	        cout << adj_mat[i][j] << " ";
	        }
	    cout << endl;
	    }
  return 0;

}
/* input pattern : node , edge
                  node <-> node
                  node <-> node 
                  node <-> node 
memset has been used to iniasialize the values of adjesent matrics 
the syntax of memset ( memset(name of matrix , value to input , size of matrix))
  */
