#include <iostream>

using namespace std;

template <class T>
T inputFunction(T inputNum)
{
	if (inputNum == 0){
		return 0;
	} else {
		cout << "Hello" << endl;
		return inputFunction(--inputNum);
	}
}


int main()
{
	int testNum;
	cin >> testNum;
	inputFunction(testNum);
	return 0;
}
