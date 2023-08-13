//this file contain all types of pattern 

#include<bits/stdc++.h>
using namespace std;

int main(){

	int total_Row, total_Col;
	cin>>total_Row;
	cin>>total_Col;

// *****************************************************************************
	// // star Square/Rectangle pattern
	// // * * * * * *
	// // * * * * * *
	// // * * * * * *
	// // * * * * * *

	for (int row = 0; row < total_Row; row++)
	{
		for (int col = 0; col < total_Col; col++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}

	cout<<endl;

 // ****************************************************************************

	// // Hollow square/Rectangle Pattern
	// // * * * * * *
	// // *         *
	// // *         *
	// // * * * * * *

	for(int row=0; row < total_Row; row++)
	{
		for(int col=0; col< total_Col; col++)
		{
			if(row==0 || row==total_Row-1){
				cout<<"* ";
			}else{
				if(col==0 || col==total_Col-1){
					cout<<"* ";
				}else{
					cout<<"  ";
				}
			}

		}
		cout<<endl;
	}

 // ****************************************************************************


	return 0;
}