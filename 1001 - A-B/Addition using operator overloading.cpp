Handle   : vipsharmavip 
Email id : vipsharmavip@gmail.com
Facebook : https://www.facebook.com/vipsharmavip

#include<bits/stdc++.h>
using namespace std;
class addition{
private: 
	int number;
public:
	addition(int _number){
	number = _number;
	}
	void print(){
		cout << number << endl;
	}
 addition operator + (addition const &number_one){
	return addition(number + number_one.number);
}
};
int main(){
	             string x;
	             while(getline(cin , x)){
	             stringstream is(x);	             
	             int a, b;
	             is >> a;
	             is >> b;
	             addition number_one(a);	             
	             addition number_two(b);
	             addition res = number_one + number_two;
	             res.print();
	         }
}
