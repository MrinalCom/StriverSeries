int countDigits(int n){
	// Write your code here.
	int number;
	int count=0;
	while(n>0){
		number=n%10;
		count++;
		n=n/10;
	}	
	return count;
}
