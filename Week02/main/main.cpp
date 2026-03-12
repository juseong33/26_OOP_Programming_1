#include <iostream>

using namespace std;

/* Quiz 1

int main() {

	cout << "    *\n";
	cout << "   ***\n";
	cout << "  *****\n";
	cout << " *******\n";
	cout << "*********\n";

	return 0;
}
*/

/* Quiz 2
	
int main() {

	cout << "2 x 1 = 2\t"  << "3 x 1 = 3\t"  << "4 x 1 = 4\t"  << "5 x 1 = 5\n";
	cout << "2 x 2 = 4\t"  << "3 x 2 = 6\t"  << "4 x 2 = 8\t"  << "5 x 2 = 10\n";
	cout << "2 x 3 = 6\t"  << "3 x 3 = 9\t"  << "4 x 3 = 12\t" << "5 x 3 = 15\n";
	cout << "2 x 4 = 8\t"  << "3 x 4 = 12\t" << "4 x 4 = 16\t" << "5 x 4 = 20\n";
	cout << "2 x 5 = 10\t" << "3 x 5 = 15\t" << "4 x 5 = 20\t" << "5 x 5 = 25\n";
	cout << "2 x 6 = 12\t" << "3 x 6 = 18\t" << "4 x 6 = 24\t" << "5 x 6 = 30\n";
	cout << "2 x 7 = 14\t" << "3 x 7 = 21\t" << "4 x 7 = 28\t" << "5 x 7 = 35\n";
	cout << "2 x 8 = 16\t" << "3 x 8 = 24\t" << "4 x 8 = 32\t" << "5 x 8 = 40\n";
	cout << "2 x 9 = 18\t" << "3 x 9 = 27\t" << "4 x 9 = 36\t" << "5 x 9 = 45\n";

	return 0;
}
*/

/* Quiz 3

int main() {

	int initialPwd = 0;
	int checkPwd = 0;

	cout << "Please enter your pwd: "; 
	cin >> initialPwd;
	
	cout << "Enter your pwd again: ";
	cin >> checkPwd;

	if (initialPwd == checkPwd) {
		cout << "Correct pwd.";
	}

	if (initialPwd != checkPwd) {
		cout << "Incorrect pwd.";
	}

	return 0;
}

*/

/* Quiz4

int main() {

	int productNum = 0;
	int productPrice = 0;
	int amountNum = 0;

	cout << "Welcome to my shop, please select the product number:\n";
	cout << "pro1:1[100$}, pro2:2[300$], pro3:3[600$]\n";

	cin >> productNum;

	if (productNum > 0  && productNum < 4) {

		if (productNum == 1) {
			productPrice = 100;
		} 
		if (productNum == 2) {
			productPrice = 300;
		}
		if (productNum == 3) {
			productPrice = 600;
		}

		cout << "You select pro" << productNum << endl;
		cout << "Please input the number you want to buy:";

		cin >> amountNum;

		cout << "you have to pay:  " << productPrice * amountNum << "$\n";
	}

	return 0;
} 

*/

/* Quiz 5 

int main() {
	
	int inputNum1 = 0;
	int inputNum2 = 0;
	int resultValue = 0;

	cout << "Please input 2 number:\n";
	cin >> inputNum1 >> inputNum2;

	if (inputNum1 > inputNum2) {
		resultValue = inputNum1 % inputNum2;
	}

	if (inputNum1 < inputNum2) {
		resultValue = inputNum2 % inputNum1;
	}

	if (resultValue != 0) {
		cout << "The mod of " << inputNum1 << " and " << inputNum2 << "is " << resultValue << endl;
	}

	return 0;
}

*/

/* Quiz 6

int main() {

	int inputNum = 0;
	int lastDigitNum = 0;

	cout << "양의 정수를 입력하세요: ";
	cin >> inputNum;
	
	lastDigitNum = inputNum % 10;

	cout << "입력한 정수: " << inputNum << endl;
	cout << "1의 자리수 수: " << lastDigitNum <<endl;

	return 0;
}

*/

/* Quiz 7

int main() {

	int inputNum = 0;
	int hour = 0;
	int min = 0;
	int sec = 0;

	cout << "초 단위 시간을 양의 정수로 입력:  ";
	cin >> inputNum;
	cout << "입력된 초 단위 시간:  " << inputNum << endl;

	hour = inputNum / 3600;
	min = (inputNum % 3600) / 60;
	sec = (inputNum % 3600) % 60;

	cout << "결과:  " << hour << "시간 " << min << "분 " << sec << "초\n";

	return 0;
}

*/