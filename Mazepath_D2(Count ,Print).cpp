

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isSafe(int x,int y,int row,int col,vector< vector<int>>visited,vector<vector<int>>m)
{
	if( (x>=0 && x<row) &&  (y>=0 && y<col) && visited[x][y]==0 && m[x][y]==1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void solve(vector<vector<int>>& m,int row,int col,vector<string>& ans,int x,int y,vector<vector<int>> visited,string path,int &cnt)
{
	// Base Case
	if(x==row-1 && y==col-1)  //Reached Destination
	{
		ans.push_back(path);
		return;
	}
	visited[x][y]=1;
	cnt = cnt+1;	
	//down
	int newx = x+1;
	int newy = y;
	if(isSafe(newx,newy,row,col,visited,m))
	{
		path.push_back('V');
		solve(m,row,col,ans,newx,newy,visited,path,cnt);
		path.pop_back();
	}
	
	// //left
	//  newx = x;
	//  newy = y-1;
	// if(isSafe(newx,newy,n,visited,m))
	// {
	// 	path.push_back('L');
	// 	solve(m,n,ans,newx,newy,visited,path);
	// 	path.pop_back();
	// }
	
	//right
	 newx = x;
	 newy = y+1;
	if(isSafe(newx,newy,row,col,visited,m))
	{
		path.push_back('H');
		solve(m,row,col,ans,newx,newy,visited,path,cnt);
		path.pop_back();
	}
	
    	//Diagonal
	
	newx = x+1;
    newy = y+1;
	if(x == y || x+y == col-1){
		if(isSafe(newx,newy,row,col,visited,m))
		{
			path.push_back('D');
			solve(m,row,col,ans,newx,newy,visited,path,cnt);
			path.pop_back();
		}
	}
	visited[x][y]=0; //  Waapis jaate huye mtlb agar multiple possible solutions nikaalne ho toh...
}

vector<string> findPath(vector<vector<int>>& m,int row,int col,int &cnt)
{
	vector<string> ans;
	if(m[0][0]==0){ //If in starting there is 0 means no entry point
		return ans;
	}
	
	int srcx=0;
	int srcy=0;
	
	vector<vector<int>> visited = m;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			visited[i][j]=0;
		}
	}
	
	string path="";
	solve(m,row,col,ans,srcx,srcy,visited,path,cnt);
	// sort(ans.begin(),ans.end());
	
	return ans;
}

int main()
{

	// vector<vector<int>> m = {{1,1,1},
	// 							{1,1,1},
	// 							{1,1,1}};  

	vector<vector<int>> m;
	int row,col;
	cin >> row;
    col=row;
	for(int i=0;i<row;i++)
	{
		vector<int> tmp;
		for(int j=0;j<col;j++)
		{
			// int t;
			// cin >> t;
			tmp.push_back(1);
		}
		m.push_back(tmp);
	}

	int cnt=0;
	vector<string> ans = findPath(m,row,col,cnt);
	
	// for(int i=0;i<ans.size();i++)
	// {
	// 	cout << ans[i];
	// }
    for(auto i: ans){
        for(auto k:i){
            cout << k;
        }
		cout <<" ";
    }
	cout << endl << ans.size();
}

/*
Output
VVHH VHVH VHHV VHD HVVH HVHV HVD HHVV DVH DHV DD 
11

*/
