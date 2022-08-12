#include<iostream>

using namespace std;
int main(){
	int marks[5], i;
	
	for(i=0; i<5; i++){
		cout<<"Marks for student "<<i+1<<": ";
		cin>>marks[i];
	}
	cout<<endl<<"Marks are: "<<endl;
	for(i=0; i<5; i++){
		cout<<"marks["<<i<<"]: "<<marks[i]<<endl;
	}
	
	return 0;
}
