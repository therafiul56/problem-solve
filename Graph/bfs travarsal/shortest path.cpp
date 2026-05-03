#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int  level[1005];

void bfs(int src)
{
    
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    
    while(!q.empty())
    {
        int per = q.front();
        q.pop();
        
        cout << per << " ";
        
        for(int chi : adj_list[per]){
            if(vis[chi]==false)
            {
                q.push(chi);
                vis[chi] = true;
                level[chi] = level[per]+1;
            }
            
        }
        
        
    }
}

int main() {
	int n,e; cin >> n >> e;
	
	while(e--)
	{
	    int a,b ; cin >> a >> b;
	    adj_list[a].push_back(b);
	    adj_list[b].push_back(a);
	    
	}
	memset(vis,false,sizeof(vis));
	memset(level,-1,sizeof(level));
	bfs(0);
	cout << "\nthe shortest path is : " << level[6];
	return 0;

}
