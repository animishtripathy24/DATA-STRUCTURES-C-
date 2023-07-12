#include<iostream>
using namespace std;

class Hero
{
    //properties
    //private data members of the class
    string name; //eg:-Ramesh
    int health; //eg:-70
    char level; //eg:-level-'A'


    //behaviours
    public:

    //default constructor
    Hero()
    {
        cout << endl << "Constructor Called " << endl;
    }
    //parameterized constructor
    Hero(string name,int health,char level)
    {
        this->name=name;
        this->health=health;
        this->level=level;
    }
    
    //setters
    void setName(string name)
    {
        this->name=name;
    }

    void setHealth(int health)
    {
        this->health=health;
    }

    void setLevel(char level)
    {
        this->level=level;
    }

    //getters

    string getName()
    {
        return this->name;
    }

    int getHealth()
    {
        return this->health;
    }

    char getLevel()
    {
        return this->level;
    }
};

int main()
{
    //making an object of class Hero statically
    Hero h;
    h.setHealth(80);
    h.setName("Animish Tripathy");
    h.setLevel('A');

    cout << endl;
    cout << "The name of the hero is " << h.getName() << " the health is " << h.getHealth() << " and the level of the hero is " << h.getLevel() << endl;

    //now making an object of Hero dynamically
    Hero *h1=new Hero("animish",100,'D');
    // h1->setHealth(80);
    // h1->setName("Animish Tripathy");
    // h1->setLevel('A');

    cout << endl;
    cout << "The name of the hero is " << h1->getName() << " the health is " << h1->getHealth() << " and the level of the hero is " << h1->getLevel() << endl;

}