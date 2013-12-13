/*
 * pokaz.cpp
 *
 *  Created on: 10-12-2013
 *      Author: daniel
 */
#include <iostream>
#include "pokaz.h"
#include <string>
#include <fstream>
using namespace std;

void pokaza() {

	ofstream fout;
	ifstream fin;
	//fout.open("jara.txt");

	string line;

	//fout<<"ala ma kota";
	//fout.close();

	fin.open("jara.txt");
	//getline(fin,line);
	char ch;
	int i = 0;
	while (fin.get(ch)) {
		cout << ch;
		i++;
		if(i%30==0){cout<<endl;}
	}

	cout << "to ja !!!!!" << endl;
	cout << line << endl;
	cout << "wczytalem" << endl;
}

