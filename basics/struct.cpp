#include <bits/stdc++.h>

using namespace std;

struct date
{
	string month;
	int year;
};

struct cpu
{
	int price;
	int cores;
	date created;
}/*i7*/;

void give_data(cpu i7)
{
	cout << i7.price << " "<< i7.cores << " " << i7.created.month << " " << i7.created.year;
}

int main()
{
	cpu i7;

	i7.price = 800;
	i7.cores = 8;
	i7.created.month = "november";
	i7.created.year = 2013;

	give_data(i7);

	return 0;
}