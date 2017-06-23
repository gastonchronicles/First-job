#include <iostream>

int main()

using namespace std;
{

	char choices;
	float num1, num2;

	cout << "Enter"<< endl;
	cout << "1: Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division"<< endl;
	cin >> choices;

	cout << "Enter first value:" << endl;
	cin >> num1 ;

	cout << "Enter second value: " << endl;
	cin>> num2;

	switch(choices){
		case '1':
			cout <<num1 + num2;
			break;

		case '2':
			cout << num1 - num2;
			break;

		case '3':
			cout << num1 * num2;
			break;
		case '4':
			cout < num1 / num2;
			break;

		default:

			cout<<"You should input a correct choice"<<endl;
			break;

	}

	return 0;
}