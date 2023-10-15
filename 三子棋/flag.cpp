#include<iostream>
#include<time.h>
#include"flag.h"
using namespace std;
void Mune() {
	printf("*********************\n");
	printf("******1.玩家先手*****\n");
	printf("******2.电脑先手*****\n");
	printf("******0.退出游戏*****\n");
	printf("*********************\n");
}
int Select() {
	int i;
	//cin >> i;
	return 2;
}
bool JudgeFull(char p[3][3]) {
	int ret = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (p[i][j] != 32)
				ret++;
		}
	}
	if (ret == 9) {
		cout << "棋盘已满，游戏结束" << endl;
		return false;
	}
	else
		return true;
}
void Table(char p[3][3]) {
	printf("  1   2   3  --->y\n");
	printf(" +------------\n");
	printf("1| %c | %c | %c\n", p[0][0],  p[0][1] , p[0][2]);
	printf(" |---+---+---\n");
	printf("2| %c | %c | %c\n", p[1][0], p[1][1], p[1][2]);
	printf(" |---+---+---\n");
	printf("3| %c | %c | %c\n", p[2][0], p[2][1], p[2][2]);
	printf(" |\n");
	printf(" V\n");
	printf(" x\n");
	cout << endl;
	cout << endl;
}
int  casual() {
	srand((unsigned)time(NULL));
return rand()%3+1;
}
void computer(char p[3][3]) {
	int a = casual();
	int b = casual();
	if (p[a][b] == 32) {
		cout << "电脑落子处" << a+1 << " " << b+1 << endl;
		p[a][b] = '#';
	}
	else
		computer(p);
}
void Player(char p[3][3]) {
	int a, b;
	cout << "玩家输入落子处：";
	cin >> a>>b;
	a -= 1, b -= 1;
	if (p[a][b] == 32) 
		p[a][b] = '*';
	else {
		cout << "落子错误请重新落子" << endl;
		Player(p);
	}
}
bool RowAndColum(char p[3][3]) {
	for (int i = 0; i < 3; i++) {
		if (p[i][0] == p[i][1] && p[i][0] == p[i][2]&&p[i][0]!=32)
			return true;
	}
	for (int i = 0; i < 3; i++) {
		if (p[0][i] ==p[1][i] && p[0][i] == p[2][i]&&p[0][1]!=32)
			return true;
	}
	if (p[0][0] == p[1][1] && p[0][0] == p[2][2] && p[1][1] != 32)
		return true;
	else
		return false;
}
bool Estimate(char p[3][3]) {
	if (RowAndColum(p))
		return true;
	else
		return false;
}