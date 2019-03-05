
#include <iostream>
const int Len = 40;
struct golf
{
	char fullname[Len];
	int handicap;
};

//non-interactive version:
//function sets golf struct to provided name,handicap
//using values passed as arguments to the function
void setgolf(golf& g, const char* name, int hc);

//interactive version:
//function solicits name and handicap from user
//and sets the member of g to the values entered
//return 1 if name is enterd,0 if name is empty string
int setgolf(golf& g);

//function resets handicap to new value
int setgolf(golf& g, int hc);

//function displays contents of golf structure
void showgolf(const golf& g);

