#include <iostream>
#include "print.h"


void printHelp()

{
	std::cout << "\nDOCUMENTATION OF BASIC OPERATIONS\n\n";



	std::cout << "An example of run without arguments: ";
	std::cout << "\nmygrep.exe\n\n";
	std::cout << "\"Give a string from which to search for: Erkki Hietalahti\n\"";
	std::cout << "\"Give search string : rkkk\n";
	std::cout << "\"rkki \"found in \"Erkki Hietalahti\" in position 1";

	std::cout << "\n\nAn example of run without alterations to the basic operations\n";
	std::cout << "mygrep.exe Search_Word Search_File.txt\n" << std::endl;
	std::cout << "Will look for lines with the word specified in the search terms" << std::endl;
	std::cout << "Will only display lines if they match Search_Word, case sensitive" << std::endl;
	std::cout << "To get the list of run options and operational acronyms, input \"o\" or \"options\" " << std::endl;

}

void printOptions()
{
	std::cout << "\nDOCUMENTATION OF OPTIONS AND OPERATIONAL ACRONYMS\n\n";

	std::cout << "\nOther than the \"options\" and \"help\" -functions, operational acronyms" << std::endl;
	std::cout << "start with \"-o\" to clarify that it's a run option." << std::endl;
	std::cout << "When refering to for example LINENUMBER command, which is writen as \"-ol\"" << std::endl;
	std::cout << "the document will refer to it as \"l\", with the \"-o\" being implied\n" << std::endl;
	std::cout << "Example use of LINENUMBER -function writen on the terminal: ";
	std::cout << std::endl;
	std::cout << "\nmygrep.exe -ol Search_Word Search_File.txt\n" << std::endl;
	std::cout << "will display the line number where the Search_Word was found";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "List of run options:" << std::endl;
	std::cout << "HELP: \"h\", \"help\", \"HELP\"";
	std::cout << "\nOPTIONS: \"o\", \"options\"";
	std::cout << std::endl;

	std::cout << "LINE NUMBER: \"l\" " << std::endl;
	std::cout << "OCCURANCES: \"o\" " << std::endl;
	std::cout << "REVERSE SEARCH: \"r\" " << std::endl;
	std::cout << "IGNORE CASE: \"i\" " << std::endl;


}