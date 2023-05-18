
#include<iostream>
#include<string>
#include<vector>
#include"Food.h"

using namespace std;
namespace food {

    Food::Food(string n, int c, vector<string> f) {

        this->name = n;
        this->calories = c;
        this->flavors = f;

    }

    int Food::getCalorieCount() {

        return calories;

    }

    void Food::results() {

        string results = "Name: " + name + "\nCalories : " + to_string(getCalorieCount()) + "\nFlavors:\n";
        cout << results;
        for (string w : flavors) {
            cout << w << "\n";
        }

    }

    bool Food::hasFlavor(string flavor) {

        cout << "\nDoes " << name << " have the " << flavor << " flavor?\n";

        for (string f : flavors) {

            if (flavor == f) {

                cout << "Yes!\n\n";

                results();

                cout << "\n\n";

                return true;

            }

        }

        cout << "No!\n\n";
        results();
        cout << "\n\n";
        return false;

    }

    Food operator+(const Food& a, const Food& b) {

        vector<string> f;
        string n = a.name + " and " + b.name;
        int c = a.calories + b.calories;
        for (string fT : a.flavors) {
            f.push_back(fT);
        }
        for (string fT : b.flavors) {
            f.push_back(fT);
        }

        Food food(n, c, f);

        food.results();

        return food;
    };
};