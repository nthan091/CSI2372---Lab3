#include <iostream>
#include <process.h>
#include <iomanip>
using namespace std;
const int sizeSt = 20; // size string
struct Evaluation
{
	char student[sizeSt];
	int grade;
	Evaluation* next;
};
Evaluation* add(Evaluation*, int&);
Evaluation* remove(Evaluation*, int&);
void display(Evaluation*);
int average(Evaluation*, int const&);
