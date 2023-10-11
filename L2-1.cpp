#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int cpBox = 0,				//Cookies per box
		bpContainer = 0,		//Boxes per container
		totalCookies = 0,		//Total number of cookies
		cbNeeded = 0,			//Cookie boxes needed
		cNeeded = 0;			//Containers needed

	char q;

	cout << "Anthony Cantu\t" << "L2-1\t" << "L2-1.exe" << endl << endl;

	cout << "Enter the number of cookies per box or press\n"
		<< "'Enter' to use the default of 24 per box." << endl;
	
	if (cin.peek() == '\n')
	{
		cout << "Default cookies per box will be used." << endl;
		cpBox = 24;
	}
	else
	{
		cin >> cpBox;
		if (!cin) //User did not enter a integer
		{
			cout << endl << "ERROR: The value entered should be a numeric value." << endl << endl
				<< "Press enter to Exit.";

			cin.clear();
			cin.ignore(2, '\n');
			cin.get(q);

			return 1; 
		}
	}

	cin.clear();			//Restore input stream
	cin.ignore(2, '\n');	//Clear the buffer
	cout << endl;			//Line Break

	cout << "Enter the number of boxes per container or press\n"
		<< "'Enter' to use the default of 75 boxes per container." << endl;

	if (cin.peek() == '\n')
	{
		cout << "Default boxes per container will be used." << endl;
		bpContainer = 75;
	}
	else
	{
		cin >> bpContainer;
		if (!cin) //User did not enter a integer
		{
			cout << endl << "ERROR: The value entered should be a numeric value." << endl << endl
				<< "Press enter to Exit.";

			cin.clear();
			cin.ignore(2, '\n');
			cin.get(q);

			return 1; 
		}
	}

	cin.clear();			//Restore input stream
	cin.ignore(2, '\n');	//Clear the buffer
	cout << endl;			//Line Break

	cout << "Enter the total number of cookies: ";

	cin >> totalCookies;
	if (cin)
	{
		if (!(totalCookies >= 0))
		{
			cout << endl << "ERROR: Please enter a value greater than 0." << endl << endl
				<< "Press enter to Exit." << endl;

			cin.clear();
			cin.ignore(2, '\n');
			cin.get(q);

			return 1;
		}
	}
	else
	{
		cout << endl << "ERROR: The value entered should be a numeric value." << endl << endl
			<< "Press enter to Exit.";
		
		cin.clear();
		cin.ignore(2, '\n');
		cin.get(q);

		return 1;
	}

	cbNeeded = totalCookies / cpBox;
	cNeeded = cbNeeded / bpContainer;

	cout << endl; //Line Break

	cout << setfill(' ');

	cout << right << setw(46) << "The number of cookie boxes needed to hold "
		<< "the cookies: " << totalCookies / cpBox << endl;

	cout << right << setw(59) << "Leftover cookies: " 
		<< totalCookies % cpBox << endl;

	cout << right << "The number of containers needed to store "
		<< "the cookie boxes: " << cNeeded << endl;

	cout << right << setw(59) << "Leftover boxes: " 
		<< cbNeeded % bpContainer << endl << endl;

	cout << "Press any key to Exit.";
	cin.ignore(2, '\n');
	cin.get(q);

	return 0;
}