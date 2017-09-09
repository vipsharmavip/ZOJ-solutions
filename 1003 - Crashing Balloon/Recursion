Handle   : vipsharmavip 
Email id : vipsharmavip@gmail.com
Facebook : https://www.facebook.com/vipsharmavip


#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector< vector< int >  > solutions;
void sol(vector< int > a, ll num, int div){
	     if(num  == 1){
	     	if(a.size())
	     	solutions.push_back(a);
	     	return;
	     }
	     if(div > 100 ) return;
	     sol(a, num, div + 1);
	     if(num % div == 0){
	     	a.push_back(div);
	     	sol(a, num/div, div + 1);
	     	a.erase(--a.end());
	     }

}

bool check(vector< vector< int > > A, vector< vector< int > > B){
	 for(int i = 0 ; i < A.size() ; ++i ){
	 	int hsh[101] = {0};
	 	for(int j = 0 ; j < A[i].size() ; ++j )
	 		    hsh[A[i][j]] = 1;
	 	for(int j = 0 ; j < B.size() ; ++j ){
	 		int match = 0;
	 		for(int k = 0 ; k < B[j].size() ; ++k )
	 			   if(hsh[B[j][k]]) match = 1;
	 			if(!match) return true;
	 	}
	 }
	 return false;
}

void print(vector< vector< int  > > A){
	for(int i = 0 ; i < A.size() ; ++i ){
		for(int j = 0 ; j < A[i].size() ; ++j )
			 cout << A[i][j] <<" ";
			cout << endl;
	}
	cout << endl;
}

int main(){
	         string x;
             while( getline(cin , x) ){
             	   stringstream is(x);
             	   solutions.clear();
                   ll a, b;
                   is >> a;
                   is >> b;
                   if(b > a) swap(a, b);
                   vector< int > p;   
                   sol(p, a, 2);
                   vector< vector< int > > A = solutions;
                   solutions.clear();
                   sol(p, b, 2);
                   vector< vector< int > > B = solutions;
                   if(b == 1){                   	
                   	if(A.size()) cout << a << endl; else 
                   	cout << b << endl;
                   } else {
                   	   if(!B.size()) cout << a << endl; else {
                   	   	if(!A.size()) cout << b << endl; else {
                   	   		if(check(A, B)) cout << a << endl; else 
                   	   		cout << b << endl;
                   	   	}
                   	   }
                    }
             }	
}
