#include "HEAD.h"

void main()
{
	int i, m, n = 1000;
	string a = "http://wscdn.alhls.xiaoka.tv/2018621/300/664/8UEl_fY0-Y5NX2Ac/";
	string b = ".ts";
	string c = "URL.txt";

	/*
	cout << "input the URL									";
	cin >> a;
	cout << endl << "input the part two						";
	cin >> b;
	cout << endl << "input the location and the text name	";
	cin >> c;
	*/
	cout << endl << "input the begin number					";
	cin >> m;
	cout << endl << "input the end number					";
	cin >> n;
	
	cout << endl;
	
	fstream txt;
	txt.open(c, ios::out | ios::trunc);
	
	for (i = m-1; i < n; i++)
	{
		txt << a << i << b << endl;
		cout << a << i << b << endl;	
	}
		
	
	txt.close();
	
	getchar();



}



