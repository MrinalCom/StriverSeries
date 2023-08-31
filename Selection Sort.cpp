int n = arr.size();

 

for(int i = 0; i<=n-2; i++){

int minIndex = i;

for(int j = i+1; j<= n-1; j++){

if(arr[j] < arr[minIndex]){

minIndex = j;

}

}

swap(arr[i], arr[minIndex]);

 

}

return;
