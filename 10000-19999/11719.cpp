//그대로 출력하기 2
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	for (int i = 0; i < 100; i++) {
		getline(cin, str);
		cout << str << endl;
	}
	return 0;
}