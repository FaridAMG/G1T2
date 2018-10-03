#include <iostream>
#include <string>
using namespace std;

class Cup{
    public:
        Cup()
          : color("")
        {}

        string color;

        /* This is the factory method. */
        static Cup* getCup(string color);
};

class RedCup : public Cup{
    public:
        RedCup()
        {
            color = "red";
        }
};

class BlueCup : public Cup{
    public:
        BlueCup()
        {
            color = "blue";
        }
};

class GreenCup : public Cup{
    public:
        GreenCup()
        {
            color = "green";
        }

};

Cup* Cup::getCup(string color)
{
    if (color == "red")
        return new RedCup();
    else if (color == "blue")
        return new BlueCup();
    else if(color == "green")
        return new GreenCup();
    else
        return 0;
}


int main()
{
    /* Now we decide the type of the cup at
     * runtime by the factory method argument */
    Cup* redCup  = Cup::getCup("red");
    cout << "Choosing the "<< redCup->color << " cup" << endl;

    Cup* blueCup = Cup::getCup("blue");
    cout << "Choosing the "<< blueCup->color << " cup" << endl;

    Cup* greenCup = Cup::getCup("green");
    cout << "Choosing the "<< greenCup->color << " cup" << endl;
}