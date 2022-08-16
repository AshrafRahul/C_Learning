#include<iostream>

using namespace std;
int main(){
	int A[2][3]={{10,20,30}, {40,50,60}}, row, col;
	
	for(row=0; row<2; row++){
		for (col=0; col<3; col++){
			cout<<A[row][col]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
