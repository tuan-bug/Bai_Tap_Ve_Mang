
int findmax(int a, int b){
	if(a < b)
		return b;
	return a;
}
int findmin(int a, int b){
	if(a < b)
		return a;
	return b;
}
void output_array(int a[], int n){
	int max = a[0];
	int min = a[0];
	for(int i = 0; i < n; i++){
		max = findmax(max, a[i]);
		min = findmin(min, a[i]);
	}
	cout<<"phan tu max: "<< max<<endl;
	cout<<"phan tu min: "<< min;
}

