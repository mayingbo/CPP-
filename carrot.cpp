//
//

#include <iostream>
#include <cmath>

int main33()
{
	using namespace std;

	int carrots;
	int pp;

	carrots = 25;
	cin >>  pp;
	cin.get();
	pp = sqrt(pp);
	carrots = carrots + pp;
	cout << "i have " << carrots * 5 << " big carrots." << endl;
	cin.get();
	return 0;
}