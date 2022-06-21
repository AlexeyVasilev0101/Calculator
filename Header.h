#pragma once
#include<iostream>
using namespace std;
class Ñalculator
{
	float percent = 5;
	int days_in_year;
	int days_in_month;
	float deposit_amount;
	int amount_month;
public:
	void Set_month();
	void Set_amount();
	void Set_deposit();
	void Set_amount_month();
	float function();
};