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

    static int time_to_complete;

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

    static int gettime_to_complete()
    {
        return time_to_complete;
    }
};

int Hero::time_to_complete=5;

int main()
{
    cout << Hero::gettime_to_complete() << endl;
}