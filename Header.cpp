#include"Header.h";
void �alculator::Set_month()
{
	cout << "Enter days in month: ";
	cin >> days_in_month;
}
void �alculator::Set_amount()
{
	cout << "Enter days in year: ";
	cin >> days_in_year;
}
void �alculator::Set_deposit()
{
	cout << "Enter deposit: ";
	cin >> deposit_amount;
}
void �alculator::Set_amount_month()
{
	cout << "Enter amount of month: ";
	cin >> amount_month;
}
float �alculator::function()
{
	Set_month();
	Set_amount();
	Set_deposit();
	Set_amount_month();
	for (int i = 0; i < amount_month; i++)
	{
		deposit_amount+= deposit_amount * (percent / 100) / days_in_month * days_in_year;
	}
	return deposit_amount;
}