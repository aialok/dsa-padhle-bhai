#include <iostream>
using namespace std;

class Hero
{
private:
    int level;

public:
    string name;
    int power;

    Hero()
    {

        cout << "Contructor Called" << endl;
    }

    void setLevel(int level)
    {
        this->level = level;
    }

    int getLevel()
    {
        return this->level;
    }
};

int main()
{
    // Statically created
    Hero h1;

    Hero *h2 = new Hero();

    h1.setLevel(10);

    cout << h1.name << endl;
    cout << h1.power << endl;
    cout << h1.getLevel() << endl;

    return 0;
}

// Notes

// - In case of empty class, size of object is 1;
// - Getter & Setter - It is used to set and get the private member of class