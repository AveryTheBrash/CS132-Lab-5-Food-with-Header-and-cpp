/*This lab will be an extension of Lab 2.

Update the Food class from Lab 2 such that it has a .h "header" interface file and a .cpp implementation file.

Ensure the food constructor and internal functions use "this" for self reference.

Overload the + operator for Food that allows two Food items to be combined. 
The combined food should have a new name, ie. Beans + Rice => Beans and Rice. 
The combined food should also have the combined calories and flavors of the two Food items.

Establish a "food" namespace in the Food.h and Food.cpp files.  The main file should the have a 
"using namespace food" directive.*/

#include<iostream>
#include<string>
#include<vector>
#include"Food.h"

using namespace std;
using namespace food;

int main() {

    vector<string> flavors;
    string name;
    string flavor;

    //Input
    string in;

    //Cancel Charater check [x to cancel]
    bool nchk = true;

    flavors = { "Salty", "Spicy", "Yellow", "Tangy" };
    Food Mustard("Mustard", 12, flavors);

    flavors = { "Salty", "Sweet", "Red", "Saucy" };
    Food Ketchup("Ketchup", 25, flavors);

    flavors = { "Sour", "Sweet", "Pickly", "Rickle" };
    Food Relish("Relish", 400, flavors);

    flavors = { "Sour", "Spicy", "Worabble", "Ickay" };
    Food Worcestershire("Worcestershire", 4, flavors);



    Food MusKet = Mustard + Ketchup;

    MusKet.results();




    //Main Loop for food flavor
    do {
        do {
            nchk = true;

            //Prompt, enter a known food
            cout << "Type the name of a listed food: \n 1. "
                << Mustard.name << ",\n 2. " <<
                Ketchup.name << ",\n 3. " <<
                Relish.name << ",\n 4. " <<
                Worcestershire.name << ".\n[Press x to exit]\n\n";

            cin >> in;

            cout << "\n";

            //Caloric Information
            name = in;
            if (in == "x" || in == "X") {
                break;
            }
            if (in == "Mustard") {
                cout << "There are " << Mustard.getCalorieCount() << " calories in a serving of " << Mustard.name << "\n";
            }
            else if (in == "Ketchup") {
                cout << "There are " << Ketchup.getCalorieCount() << " calories in a serving of " << Ketchup.name << "\n";
            }
            else if (in == "Relish") {
                cout << "There are " << Relish.getCalorieCount() << " calories in a serving of " << Relish.name << "\n";
            }
            else if (in == "Worcestershire") {
                cout << "There are " << Worcestershire.getCalorieCount() << " calories in a serving of " << Worcestershire.name << "\n";
            }
            else {
                nchk = false;
                cout << "ERROR: Please try again\n";
            }

            //Flavor Check
        } while (!nchk);


        //Exit Catcher
        if (in == "x" || in == "X") {
            break;
        }

        cout << "Type a flavor, see if this food's got it\n\n";

        cin >> flavor;

        if (name == "Mustard") {
            Mustard.hasFlavor(flavor);
        }
        else if (name == "Ketchup") {
            Ketchup.hasFlavor(flavor);
        }
        else if (name == "Relish") {
            Relish.hasFlavor(flavor);
        }
        else if (name == "Worcestershire") {
            Worcestershire.hasFlavor(flavor);
        } else         //Exit Catcher
            if (in == "x" || in == "X") {
                break;
            }

        cout << "Would you like to continue?\n[X] = EXIT \t [ANYCHARACTER] = CONTINUE\n\n";

        cin >> in;

        cout << "\n";

        if (in == "x" || in == "X") {
            break;
        }
        else {
            in = "a";
        }

    } while (in != "x" || in != "X" || in == "a");

    cout << "Thanks for playing!\n";
}





