#include<iostream>
using namespace std;

//Write the definition of myString() here
char myString(char *a,int N){
	string s ="";
	for (int i = 65; i < 65+N; i++){
		
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
