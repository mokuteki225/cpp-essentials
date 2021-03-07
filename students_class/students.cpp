#include <bits/stdc++.h>
#include "students.h"

using namespace std;

void Students::set_name(string student_name)
{
	Students::name = student_name;
}

string Students::get_name()
{
	return Students::name;
}

void Students::set_last_name(string student_last_name)
{
	Students::last_name = student_last_name;
}

string Students::get_last_name()
{
	return Students::last_name;
}

void Students::set_marks(int student_marks[])
{	
	for(int i = 0; i < 5; i++)
	{
		Students::marks[i] = student_marks[i];
	}
}

void Students::calculate_avg_mark()
{
	int sum = 0;
	for(int i = 0; i < 5; i++) 
		sum += Students::marks[i];
			
	Students::avg_mark = sum / 5.0;
}

float Students::get_avg_mark()
{
	return Students::avg_mark;
}