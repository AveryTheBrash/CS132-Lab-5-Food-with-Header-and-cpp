#pragma once

#include<iostream>
#include<string>
#include<vector>

using namespace std;
namespace food {

    class Food {

    public:

        Food() {}

        Food(string n, int c, vector<string> f);

        int getCalorieCount();
        void results();

        bool hasFlavor(string flavor);

        friend Food operator+ (const Food& a, const Food& b);



        string name = "Default";

    private:

        int calories = 0;

        vector<string> flavors = { "Evil" };

    };
};
