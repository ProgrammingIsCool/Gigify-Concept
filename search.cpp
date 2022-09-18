#include "\Users\paige\Desktop\Project\header.h"

string search(string x)
{
    string path = "\\Users\\paige\\Desktop\\Project\\gigData\\" + x + "\\listOfGigs.csv";

    ifstream readGigList;

    readGigList.open(path);

    string finalListOfGigs;

    static string readFile;
    int numberGig = 1;
    while(getline(readGigList, readFile, ',')){
        finalListOfGigs = finalListOfGigs + readFile + '[' + to_string(numberGig) + ']' + "\n";
        numberGig++;
    }

    readGigList.close();

    return "List of Available Gigs in " + x + ":\n" + finalListOfGigs;
}