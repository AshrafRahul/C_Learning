#include<iostream>

using namespace std;
int main(){
	int A[2][3], row, col;
	
	//getting input
	cout<<"Enter elements of array: "<<endl;
	for(row=0; row<2; row++){
		for(col=0; col<3; col++){
			cout<<"array["<<row<<"]["<<col<<"]: ";
			cin>>A[row][col];
		}
		cout<<endl;
	}
	
	//output display
	cout<<endl<<"Displaying array: "<<endl;
	for(row=0; row<2; row++){
		for (col=0; col<3; col++){
			cout<<A[row][col]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
