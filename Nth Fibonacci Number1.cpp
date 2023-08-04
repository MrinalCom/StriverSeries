#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int odd=0;
	int even=0;
	int r;
	while(n>0){
		r=n%10;
		if(r%2==0){
			even=even+r;
		}
		else	{	
			odd=odd+r;
		}
		n=n/10;
		
			
	}
	cout<<even<<" "<<odd;
	
}
