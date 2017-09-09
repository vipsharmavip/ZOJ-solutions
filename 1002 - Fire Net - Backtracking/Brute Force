Handle   : vipsharmavip 
Email id : vipsharmavip@gmail.com
Facebook : https://www.facebook.com/vipsharmavip


#include<bits/stdc++.h>
using namespace std;
int n;
bool isplaced(vector< vector< int > > X, int i, int j){
	if(X[i][j]  != 0 ) return false;
	int x = i;
	int y = j; 
	while(x >= 0){                      
		if(X[x][y] == 2) return false;
		if(X[x][y] == 1) break;
				--x;                            // up
	}
    x = i;
    y = j;
    while(y >= 0){                      
    	if(X[x][y] == 2) return false;      
		if(X[x][y] == 1) break;
		    	--y;                            // left
    }	    
    x = i;
    y = j;
    while(x < n){                        
    	if(X[x][y] == 2) return false;
		if(X[x][y] == 1) break;
		    	++x;                            // down
    }
    x = i;
    y = j;
    while(y < n){ 
    	if(X[x][y] == 2) return false;
		if(X[x][y] == 1) break;
		    	++y;                            // right
    }
    return true;
}
int solve(vector< vector< int > > X){
	vector< pair< int, int > > pos;
	for(int i = 0 ; i < n ; ++i ){
	  for(int j = 0 ; j < n ; ++j ){
	  	   if(isplaced(X, i, j)) pos.push_back(make_pair(i, j));
	  }		   
	}

	if(pos.size() == 0) return 0;

	int ans = 0;
	for(int i = 0; i < pos.size(); ++i ){
		int x = pos[i].first;
		int y = pos[i].second;
		X[x][y] = 2;
		ans = max(ans, solve(X));
		X[x][y] = 0;
	}	

	return 1 + ans;
}
int main(){
	             cin >> n;
	             while(n){
	             	vector< vector< int > > X;
	             	X.resize(n);
	             	for(int i = 0 ; i < n ; ++i ){
	             	X[i].resize(n);	
	             	char wall;
	             		 for(int j = 0 ; j < n ; ++j ){
	             		 	cin >> wall;
	             		 	if(wall == '.')
	             		 X[i][j] = 0; else 
	             		 X[i][j] = 1;		
	             		 }
	             	}     

	             	cout << solve(X) << endl;

	             	cin >> n;	             	
	             }
	    return 0;
}
