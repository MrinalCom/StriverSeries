int gcd(int a,int b)
{
	//Write your code here
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
	
	

	

}

