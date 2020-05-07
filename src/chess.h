#ifndef CHESS_H
#define CHESS_H

#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void Move(
	char pole[][9], 
	int *team, 
	int *scorewhite, 
	int *scoreblack, 
	char *Maswhite, 
	char *Masblack);
int MoveCheck(int team, int i1, int i2, int j1, int j2, char pole[][9]);
int AttackCheck(
	int team, 
	int i2, 
	int j2, 
	char pole[][9], 
	int scorewhite, 
	int scoreblack, 
	char *Maswhite, 
	char *Masblack);
int AttackArea(int team, int area, int i2, int j2, char pole[][9]);
int FriendlyFire(int side, int i2, int j2, char pole[][9]);

#endif
