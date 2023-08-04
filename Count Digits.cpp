int countDigits(int n){
	// Write your code here.
	int r;
	int count=0;
	int temp=n;
	while(temp>0){
		r=temp%10;
		if(r==0){
			count+=0;
		}
		
		else if(n%r==0){
			count++;
		}
		temp=temp/10;
		
	}
		

	
	return count;
	
}
