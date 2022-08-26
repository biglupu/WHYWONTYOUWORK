#include <iostream>
#include <fstream>
#include "basicRun.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;



void basicRun(int argCee, string yksi, string kaksi)
{
    ifstream inputFile;
    string filename;
    string search_w;
    string found_w;
    bool found = 0;
    string line;

    bool printed = 0;


    if (argCee > 1)
    {

        search_w = yksi;
        filename = kaksi;

        inputFile.open(filename);
        if (inputFile)
        {
            while (getline(inputFile, line))
            {

                if (line.find(search_w) != -1)
                {
                    if (printed == 0)
                    {
                        cout << "\nStrinG \"" << search_w << "\" found on the lines:\n";
                        printed = 1;
                    }
                    cout << line << endl;

                    found = 1;

                }


            }

            if (found == 0)
            {
                cout << "Word \"" << search_w << "\" not found in file: " << filename;
            }

            inputFile.close();
        }
        else
            cout << "Error, couldn't read file: " << filename;
    }
}