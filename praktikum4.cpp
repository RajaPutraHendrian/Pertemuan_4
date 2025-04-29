#include<iostream>
using namespace std;

int faktorial(int n){
    if(n == 1 || n == 0) {
	cout<<n<<" = ";
	return 1; 
	}
    else { 
    cout<<n<<" x ";
	return n * faktorial(n-1); 
	}
}

int main(){
    int n;
    cout<<"Masukkan angka: " ; cin>>n;
    
    if(n < 0) {
		cout<<"Faktorial tidak didefinisikan untuk angka negatif."<<endl;
	} else {
		cout<<"Faktorial dari "<<n<<" adalah ";
		cout<<faktorial(n);
	}
    
    
    return 0;
}
