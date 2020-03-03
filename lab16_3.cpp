#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
int dotProduct(vector<int> a,vector<int> b){
	int product = 0; 
  
    for (unsigned int i = 0; i < 5; i++) 
  
        product = product + a[i] * b[i]; 
    return product; 
}


void showVector(vector<int> x){
	for (int i = 0; i < 5; i++){
	cout << x[i];
	}
}


vector<int> randomVector(int v) {
	
	
}