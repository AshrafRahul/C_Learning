#include<iostream>

using namespace std;
int main(){
	int n, sum=0, i;
	cout<<"Enter number of students: ";
	cin>>n;
	
	int std[n];
	cout<<endl;
	
	//input
	for(i=0; i<n; i++){
		cout<<"Mark for student "<<i+1<<": ";
		cin>>std[i];
		sum = sum+std[i];
	}
	cout<<endl<<"Total marks: "<<sum<<endl;
	
	float avg = (float)sum/n;
	cout<<"Average: "<<avg<<endl;
	
	//maximum and minimum
	int max=std[0];
	int min=std[0];
	for(i=1; i<n; i++){
		if(max<std[i]){
			max=std[i];
		}
		if(min>std[i]){
			min=std[i];
		}
	}
	cout<<endl<<"Maximum mark: "<<max<<endl;
	cout<<"Minumum mark: "<<min<<endl;
	
	return 0;
}
