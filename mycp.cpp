// Name: Meghna Krishnan
// Student Id: 100696561
// Date: 2020-01-21
// Program: mycp.cpp
// Purpose: Implementing I/O to files

#include <iostream>
#include <string>
#include <fstream>

using namespace std; 

int main(int argc, char const *argv[])
{
	// check if there are enough arguments
	if (argc < 3) {
		cerr << "There are not enough arguments." << endl;
		return 1;
	}

	char c;

 	ifstream fin;
 	ofstream fout;
	
	// open the first file
	fin.open(argv[1]);

    if (fin.fail()) {  // check if it is successful
        cerr << "Cannot open the input file!" << endl;
        return 1;
    }

	// open the second file
    fout.open(argv[2]);

    if (fout.fail()) {  // check if it is successful
        cerr << "Cannot open the output file!" << endl;
        return 1;
    }
 	
 	while(fin.get(c)) 
	{
		fout << c;
	}
 	
 	fin.close(); 
 	fout.close();

 	 return 0;
 } 