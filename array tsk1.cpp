//store 10 values in an array and print their sum
#include<iostream>
using namespace std;
//int main()
//{   
//    int sum=0;
//    int array[10]= {12,6,21,89,3,76,23,84,2,11};
//	
//	for (int i=0; i<10; i++){
//		sum += array[i];
//	} 
//	
//	cout << "The sum of entered arrays is : " << sum << endl;
//		
//	return 0;
//}

int main(){
	int sum=0;
	int array[5];
	cout << "Enter arrays: " << endl;
	
	for (int i=0; i<5; i++){
		cin >> array[i];
		sum+=array[i];
	}
	cout << "the summ of arrays is: " << sum << endl;
}
