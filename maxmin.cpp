#include<iostream>

using namespace std;

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


void input_array(int a[], int &n){
	for(int i = 0; i < n; i++){
		cout<<"nhap vao phan tu thu a["<<i+1<<"]";
		cin>>a[i];
	}
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




int main(){
	int n; 
	int a[100];
	cout<<"nhap vao so luong phan tu mang: ";
	cin>>n;
	input_array(a, n);
	output_array(a,n);
	
	return 0;
}
