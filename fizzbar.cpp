// my first program in C++
#include <iostream>
using namespace std;
int main () {
	for (int i = 0; i <=100;i++){
		if (i % 5 == 0 && i % 3 == 0){
			cout << "FizzBar\n";
		} else if (i % 3 == 0){
			cout << "Fizz\n";
		} else if (i % 5 == 0){
			cout << "Bar\n";
		} else {
			cout << i; cout << endl;
		}
	}
return 0; }