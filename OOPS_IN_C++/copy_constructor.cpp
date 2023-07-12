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

    //if we want to make user-defined copy constructor in case we have created the object dynamically
    Hero (Hero *s)
    {
        cout << "Copy constructor Called (dynamic object wala...)" << endl;
        this->name=s->name;
        this->health=s->health;
        this->level=s->level;
    }

    //copy constructor in the case when the object is statically
    Hero(Hero &temp)
    {
        cout << "Copy constructor Called (static object wala...)" << endl;
        this->name=temp.name;
        this->health=temp.health;
        this->level=temp.level;
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
    //if the object would have been created statically and then we have to amke the copy constructor
    Hero R("Abhinay Tripathy",70,'C');

    //creating a copy constructor....
    Hero S(R);
    cout << "The name of the hero is " << S.getName() << " the health is " << S.getHealth() << " and the level of the hero is " << S.getLevel() << endl;


    //creating an object of the Hero class dynamically
    Hero *h=new Hero("Animish Tripathy",100,'B');

    //making an copy constructor
    Hero *s=new Hero(h);
    
    cout << endl;

    cout << "The name of the hero is " << s->getName() << " the health is " << s->getHealth() << " and the level of the hero is " << s->getLevel() << endl;
}