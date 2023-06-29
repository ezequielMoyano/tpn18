#include <bits\stdc++.h>
using namespace std;
vector<int> GenerarVectorA(int tam){
	vector<int> A;
	int random;
	
	srand(time(NULL));
	for(int i=0; i<tam; i++){
		random = rand()%100;
		A.push_back(random);
	}
	return A;
}

void MostrarVectorA(vector<int> A){
	for(int i=0; i<A.size(); i++){
		cout<<A[i]<<"/";
	}
}

vector<int> GenerarVectorB(vector<int> A){
	vector<int> B;
	for(int i=0; i<A.size(); i++){
		if(A[i]%2 == 0 ){
			B.push_back(A[i]);
		}
	}
	return B;
}

void MostrarVectorB(vector<int> B){
	for(int i=0; i<B.size(); i++){
		cout<<B[i]<<"/";
	}
}

int main(){
	
	vector<int> A = GenerarVectorA(10);
	cout<<"Vector A : ";
	MostrarVectorA(A);
	
	cout<<endl<<endl;
	
	vector<int> B = GenerarVectorB(A);
	cout<<"Vector B : ";
	MostrarVectorB(B);
	
	return 0;
}
