//============================================================================
// Name        : CLI_Calculator.cpp
// Author      : Damien Burks, Ahmeen Muhammad, Xavier Winters
// Version     : 1.0
// Copyright   : Texas Southern University, CS 456, Dr. Khan
// Description : Simple Calculator, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;
//void addNumbers(int,int);

int main() {
	double num1, num2, sol;
	int i = 0; char a;
	string oper, buff, tempNum; stringstream ss; bool firstTime = true;
	vector<char> temp; vector<string> input;
	string s;
	cout << "CLI Calculator" << endl;

	cout<<"Please enter the numbers you'd like to add: "<<endl;
	cout<<"Example input: 100 + 3000"<<endl;
	//Splitting up the string into an array of char
	cin>>s;
	for(char numbers : s)
		temp.push_back(numbers);
	//Converting the character array to a string array
	while(i < temp.size()){
		a = temp[i];
		input.push_back(string(1,a));
		i++;
	}

	//Reinitialize i to 0
	i=0;
	while(i < input.size()){
		if(firstTime == true){
			num1 = stod(input[i]);
			oper = input[i+1];
			num2 = stod(input[i+2]);
			firstTime = false;
			i+=3;
		}
		else{
			num1 = sol;
			num2 = stod(input[i+1]);
			oper = input[i];
			i+=2;
		}

		if(oper == "+")
			sol = num1+num2;
	}

	cout<<sol<<endl;

	return 0;
}
