#include <bits/stdc++.h>
using namespace std;
vector <int> adj_list[1005];
bool vis[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    
    while(!q.empty())
    {
        // queu theke ber kora
        int per = q.front();
        q.pop();
        // oi node niye kaj
        cout << per << " ";
        // chilld push kora
        for(int child : adj_list[per])
        {
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
            }
        }
    }
}
int main() {
	int n,e;
	cin >> n >> e;
	
	while(e--){
	    int a,b;cin>>a>>b;
	    adj_list[a].push_back(b);
	    adj_list[b].push_back(a);
	    }
	    memset(vis,false,sizeof(vis));
	    bfs(0);
	    return 0;

}
