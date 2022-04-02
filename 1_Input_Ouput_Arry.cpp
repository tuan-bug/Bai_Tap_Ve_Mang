#include<iostream>
using namespace std;
void Input(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> arr[i];
    }
}
void Ouput(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main(){
    int arr[1000];
    int n;
    do{
	    cout << "Nhap vao so luong mang : ";
	    cin >> n;
	}while(n<3 || n>100);
    Input(arr, n);
    cout << "Xuat mang: " << endl;
    Ouput(arr, n);
    system("pause");
    return 0;
}
