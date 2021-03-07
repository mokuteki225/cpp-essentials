#include <bits/stdc++.h>
#pragma once

using namespace std;

class Students
{
	public:
		void set_name(string);

		string get_name();

		void set_last_name(string);

		string get_last_name();

		void set_marks(int []);

		void calculate_avg_mark();

		float get_avg_mark();

	private:
		string name, last_name;
		int marks[5];
		float avg_mark;
};