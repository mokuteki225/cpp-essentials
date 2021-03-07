#include <bits/stdc++.h>
#include "students.h"

using namespace std;

int main()
{
	Students *student = new Students;

	string name, last_name;
	int marks[5], sum = 0;

	cout << "Name: ";
	cin >> name;

	cout << "Last name: ";
	cin >> last_name;

	student->set_name(name);
	student->set_last_name(last_name);

	for(int i = 0; i < 5; i++)
	{
		cout << "Mark " << i+1 << ": ";
		cin >> marks[i];
		sum += marks[i];
	}

	student->set_marks(marks);

	student->calculate_avg_mark();

	cout << "Average mark for " << student->get_name() << " " << student->get_last_name() << " is " << student->get_avg_mark() << '\n';

	delete student;

	return 0;
}