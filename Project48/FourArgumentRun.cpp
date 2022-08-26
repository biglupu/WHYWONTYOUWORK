
#include "FourArgumentRun.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;




void IVargumentRun(int argCee, string yksi, string kaksi, string kolme)
{
    ifstream inputFile;
    string filename;
    string search_w;
    string found_w;
    int found = 0;
    int unfound = 0;
    string line;
    int count = 1;
    bool printed = 0;
    int occurance = -2;
    int lineNumb = -2;
    int reverseSearch = -2;
    int ignoreCase = -2;


    /*cout << yksi << endl;*/
    yksi.erase(0, 2);

    lineNumb = (yksi.find("l"));
    if (lineNumb != -1)
    {
        cout << "Line numbers ";
        lineNumb = 1;
    }

    occurance = (yksi.find("o"));
    if (occurance != -1)
    {
        cout << "Occurances ";
        occurance = 1;
    }

    reverseSearch = (yksi.find("r"));
    if (reverseSearch != -1)
    {
        cout << "Reverse search ";
        reverseSearch = 1;
    }

    ignoreCase = (yksi.find("i"));
    if (ignoreCase != -1)
    {
        ignoreCase = 1;
        cout << "Ignoring cases ";
    }
    cout << ":" << endl;

    if (ignoreCase == 1)
        ignoreCaseRUN(kaksi, kolme, occurance, lineNumb, reverseSearch, ignoreCase);

    else
    {

        search_w = kaksi;
        filename = kolme;

        inputFile.open(filename);

        if (inputFile)

        {
            while (getline(inputFile, line))
            {

                if (reverseSearch != 1)
                {

                    if (line.find(search_w) != -1)
                    {
                        if (printed == 0)
                        {
                            cout << "\nString \"" << search_w << "\" found on the lines:\n";
                            printed = 1;
                        }
                        if (lineNumb == 1)
                        {
                            cout << count << ": ";
                        }
                        cout << line << endl;
                        count++;
                        found++;

                    }
                    else
                        count++;

                }
                if (reverseSearch == 1)
                {

                    if (line.find(search_w) == -1)
                    {
                        if (printed == 0)
                        {
                            cout << "\nString \"" << search_w << "\" not present on the lines:\n";
                            printed = 1;
                        }
                        if (lineNumb == 1)
                        {
                            cout << count << ": ";
                        }
                        cout << line << endl;
                        count++;
                        unfound++;


                    }
                    else
                        count++;

                }
            }

            cout << "\nClosing file\n";
            inputFile.close();

            if (reverseSearch == 1)
            {
                /*cout << found << " " << count << " " << unfound <<endl;*/
                found = count - unfound - 1;
                // -1 koska ensimmäinen rivi on rivi numero 1, eikä rivi numero 0. 
                //Note to self, "++":aa line ENNEN sen printtausta jatkossa
            }
            if (occurance == 1)
            {
                if (found > 0)
                {
                    if (reverseSearch != 1)
                        cout << "Occurrences of lines containing \"" << search_w << "\" : " << found;
                    else
                    {
                        cout << "Occurrences of lines containing \"" << search_w << "\" : " << found;
                        cout << "\nOccurrences of lines NOT containing \"" << search_w << "\" : " << unfound;

                    }


                }
                else
                    cout << "Word \"" << search_w << "\" not found in file: " << filename;
            }
        }


        else
            cout << "Error, couldn't read file: " << filename;

    }
}




