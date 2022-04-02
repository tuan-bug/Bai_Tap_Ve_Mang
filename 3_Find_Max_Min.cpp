

int get_max(int a, int b){
	if(a < b)
		return b;
	return a;
}

int get_min(int a, int b){
	if(a < b)
		return a;
	return b;
}


int find_MAX(int arr[], int n){
	for(int i = 0; i < n; i++){
		max = findmax(max, arr[i]);
	}
	cout<<"phan tu max: "<< max <<endl;
}


void find_MIN(int arr[], int n);{
	int min = a[0];
	for(int i = 0; i < n; i++){
		min = findmin(min, arr[i]);
	}
	cout<<"phan tu min: "<< min <<endl;
}

