#include"flag.h"

int main() {
	char arr[3][3] = {32,32,32,32,32,32,32,32,32};
	//Table(arr);
	Mune();
	if (Select() == 2) {
		while (1) {
			computer(arr);
			if (!JudgeFull(arr))
				break;
			Table(arr);
			if (Estimate(arr)) {
				cout << "����Ӯ" << endl;
				break;
			}
			Player(arr);
			if (!JudgeFull(arr))
				break;
			Table(arr);
			if (Estimate(arr)) {
				cout << "���Ӯ" << endl;
				break;
			}
		}
	}
	return 0;
	}