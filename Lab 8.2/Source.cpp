//ƒано л≥терний р€док, €кий м≥стить посл≥довн≥сть символ≥в s0, Е, sn, Е.√рупи
//символ≥в, в≥докремлен≥ проб≥лами(одним або к≥лькома) ≥ €к≥ не м≥ст€ть проб≥л≥в, будемо
//називати словами.«найти к≥льк≥сть сл≥в, €к≥ починаютьс€ з букви УbФ.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

char Amountwordsb(char* str, int& k)
{
	k = 0;
	size_t len = strlen(str);
	size_t i = 0;
	if (str[0] == 'b')
		k++;
	while (i < len)
	{
		if (str[i] == ' ' && str[i + 1] == 'b')
		{
			k++;
			i++;
		}
		else 
			i++;
	}
	return k;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	int k;
	Amountwordsb(str, k);
	cout << "Amount of words stars from letter b : " << k << endl;
	return 0;
}
