Handle   : vipsharmavip 
Email id : vipsharmavip@gmail.com
Facebook : https://www.facebook.com/vipsharmavip

#include<bits/stdc++.h>

using namespace std;

vector< string > solve1(int ca, int cb, int n){
	// first : fill , second : empty 
	vector< string > res;
	int first = 0;
	int second = 0;
	while(second != n){
		if(first == 0){
			first = ca;
			res.push_back("fill A");
		} else 
		if(second == cb){
			second = 0;
			res.push_back("empty B");
		}  else 
		if(first <= ca && second < cb){
			int req = cb - second;
			req = min(req, first);
			first -= req;
			second += req;
			res.push_back("pour A B");
		} 		
	}
	res.push_back("success");
	return res;
}

vector< string > solve2(int ca, int cb, int n){
	// first : empty , second : fill 
	vector< string > res;
	int first = 0;
	int second = 0;
	while(second != n){
		if(second == 0){
			second = cb;
			res.push_back("fill B");
		} else 
		if(first == ca){
			first = 0;
			res.push_back("empty A");
		}  else 
		if(first < ca && second <= cb){
			int req = ca - first;
			req = min(req, second);
			second -= req;
			first += req;
			res.push_back("pour B A");
		} 		
	}
	res.push_back("success");
	return res;
}



int main(){
          	string x;
          	while( getline(cin, x) ){
          		stringstream is(x);
          		int ca, cb, n;
          		is >> ca >> cb >> n;
          		vector< string > res1 = solve1(ca, cb, n);
          		vector< string > res2 = solve2(ca, cb, n);
          		if(res1.size() > res2.size()) swap(res1, res2);
          		for(int i = 0 ; i < res1.size() ; ++i )
          			cout << res1[i] << endl;
          	}
}
