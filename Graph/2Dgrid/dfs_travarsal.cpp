#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[1005][1005];
int a ,b;
vector<pair<int, int>> d = {
    {-1, 0},
    {1, 0},    
    {0, -1},  
    {0, 1}     
};

bool valid(int i , int j){
    if(i < 0 || i>= a || j<0 || j>=b )
        return  false;
    return true;
}

void dfs(int si,int sj)
{
    cout << si << sj <<" ";
    vis[si][sj] = true;
    for(int  i=0 ; i<4 ; i++)
    {
        int ci,cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;
        if(valid(ci,cj)==true && !vis[ci][cj])
            dfs(ci,cj);
    }
        
}


int main() {
	 cin >> a >> b;
	for(int i = 0 ; i<a ; i++)
	    for(int j=0 ; j<b ; j++)
	        cin >> grid[i][j];
	        
	        
	memset(vis,false,sizeof(vis));
	int si,sj; cin >> si >> sj;
	dfs(si,sj);
	return 0;

}
