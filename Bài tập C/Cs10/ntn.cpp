#include<iostream>
#include<time.h>
using namespace std;

int main()
{

	time_t rawtime;
	struct tm *timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	printf("The current date/time is: %s", asctime(timeinfo));

}