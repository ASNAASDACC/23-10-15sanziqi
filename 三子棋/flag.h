#pragma once
#include<iostream>
#include<time.h>
#include"flag.h"

using namespace std;
void Mune();
int Select();
bool JudgeFull(char p[3][3]);
void Player(char p[3][3]);
void Table(char p[3][3]);
void computer(char arr[3][3]);
bool Estimate(char arr[3][3]);