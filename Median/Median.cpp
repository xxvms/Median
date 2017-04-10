// Median.cpp : Defines the entry point for the console application.
//Median of the numbers

#include "stdafx.h"
#include "std_lib_facilities.h"
#include <iostream>



int main()
{
	vector<double>cityRoute;
	double distance;
	for (int i = 0; i < 4; i++)
	{
		cout << "Provide distance: " << endl;
		cin >> distance;
		cityRoute.push_back(distance);
	}

	sort(cityRoute);

	double distanceKM = 0;

	for (int i = 0; i < cityRoute.size(); i++)
	{
		distanceKM = (cityRoute[i] + distanceKM); //total distance

	}

	cout << "total distance on all trips is: " << distanceKM << endl;
	cout << "City Route 1st: " << cityRoute[0] << endl;
	cout << "City Route 1st: " << cityRoute[cityRoute.size()-1] << endl;


	//cout << "Median temp: " << temps[temps.size() / 2] << endl;


	system("pause"); 
    return 0;
}

