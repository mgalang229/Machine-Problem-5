#include <iostream>
using namespace std;

int main(){
	
	int choice, num, num2, counter = 0;
	char choice2;
	int values[100];
	bool test = false;
	
	while(1){
		
	cout << "\nMENU" << endl;
	cout << "1. Array 1" << endl;
	cout << "2. Array 2" << endl;
	cout << "Enter a choice: ";
	cin >> choice;
	
	if(choice == 1){
		cout << "\nARRAY 1" << endl;
		cout << "Enter n:";
		cin >> num;
		cout << "Enter " << num << " numbers: ";
		for(int i = 0; i < num; i++){
			cin >> values[i];
		}
		cout << "Enter number to search: ";
		cin >> num2;
		for(int i = 0; i < num; i++){
			counter++;
			if(num2 == values[i]){
				cout << "The number " << num2 << " is present at position " << counter << endl;
				test = true;
			}
		}
		
		if(test == false){
			cout << "Number not found";
		} 

		cout << "\nTry again (Y/N)";
		cin >> choice2;
			if(choice2 == 'Y' || choice2 == 'y'){
				system("cls");
				counter = 0;
			} else if(choice2 == 'N' || choice2 == 'n'){
				exit(1);
			} else{
				cout << "Invalid choice.";
				counter = 0;
			}
		
	} else if(choice == 2){
		cout << "\nARRAY 2" << endl;
		cout << "Enter n:";
		cin >> num;
		cout << "Enter " << num << " numbers: ";
		for(int i = 0; i < num; i++){
			cin >> values[i];
		}
		cout << "Enter number to search: ";
		cin >> num2;
		for(int i = 0; i < num; i++){
			if(num2 == values[i]){
				counter++;
			}
		}
		cout << "The number " << num2 << " occurred " << counter++ << " times";
		cout << "\nTry again (Y/N)";
		cin >> choice2;
			if(choice2 == 'Y' || choice2 == 'y'){
				system("cls");
				counter = 0;
			} else if(choice2 == 'N' || choice2 == 'n'){
				exit(1);
			} else{
				cout << "Invalid choice.";
				counter = 0;
			}
		} else{
			cout << "Invalid choice.";
		}
	}
	
	return 0;
	
}
