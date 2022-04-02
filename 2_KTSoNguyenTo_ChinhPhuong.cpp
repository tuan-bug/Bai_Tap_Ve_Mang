#include<bits/stdc++.h>
using namespace std;
// kiem tra nguyen to
int KiemTa_Nguyen_to(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
 
void Ouput_Nguyen_To(int a[], int n){
    cout<<"\nCac so nguyen to co trong mang: "<<endl;
    for(int i=0;i<n;i++)
        if(ktrant(a[i]))
            cout<<a[i]<<"  ";
}

// kiêm tra so chinh phuong
bool isSquareNumber(int a){
    if(a<1)
        return false;
    int i=1;
    while(i*i<=a){
        if(i*i==a)
            return true;
        i++;
        }
    return false;
}

void OuputSquareNumber(int a[], int n){
    cout<<"Cac so chinh phuong trong mang: \n";
    for(int i=0;i<n;i++)
        if(checkSquareNumber(a[i]))
            cout<<" "<<a[i];
}

