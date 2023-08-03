#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char c;
	cin>>c;
	int character=c;
	if(character>=65 && character<=91){
		cout<<1<<endl;
	
	}
	else if(character>=97 && character<=122){
		cout<<0<<endl;
	}
	else
		cout<<-1<<endl;
	
}
