#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src){
    queue <int> q;
    q.push(src);
    vis[src] = true ;
    while(!q.empty()){
        int per = q.front();
        q.pop();
        
        for(int child : adj_list[per]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

int main() {
	int n,e; cin >> n >> e;
	while(e--){
	    int a ,b ; cin >> a >> b;
	    adj_list[a].push_back(b);
	    adj_list[b].push_back(a);
	    
	}
	int beg; cin >> beg;
	bfs(beg);
	int des; cin >> des;
	cout << des ;
	cout << ((vis[des] == true) ?  " is existing" : " is not existing" );

}
