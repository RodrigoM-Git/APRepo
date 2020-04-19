#include <string>
#include <iostream>

class Card {

    public:
        Card(int color, int number);
        ~Card();
        int getColor();
        int getNumber();
        std::string getColorString();
        std::string getRule();

    private:
        int color;
        int number;
        std::string colorString;
        std::string rule;
};