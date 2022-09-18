#include "\Users\paige\Desktop\Project\header.h"

int main()
{
    cout << "Welcome to Gigify!" << endl;
    cout << "What state would you like to search for gigs in?(Use Abbreviated All Caps)" << endl;
    cout << "Or Type 1 for More Info" << endl;
    
    static string selectionOne;
    cin >> selectionOne;

    if(selectionOne == "1")
    {

        cout << "List of cities[1]\nAdd a gig[2]\nRemove a gig[3]" << endl;
    }

    else
    {
        static string state;
        state = selectionOne;
        cout << "What city would you like to search for gigs in?" << endl;
        
        static string city;
        cin >> city;

        string searchInfo = city + selectionOne;

        string listOfGigs = search(searchInfo);

        cout << listOfGigs << endl;
    }
}