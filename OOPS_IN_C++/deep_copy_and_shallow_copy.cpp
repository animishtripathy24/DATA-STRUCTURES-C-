#include<bits/stdc++.h>
using namespace std;

class Hero
{
    //properties

    //private data members of the class
    char name[100]; //eg:-Ramesh(character array)
    int health; //eg:-70
    char level; //eg:-level-'A'


    //behaviours
    public:
    Hero(char *name,int health,char level)
    {
        strcpy(this->name,name);
        this->health=health;
        this->level=level;
    }
    //copy constructor in the case when the object is statically
    Hero(Hero &temp)
    {
        strcpy(this->name,temp.name);
        this->health=temp.health;
        this->level=temp.level;
    }
    void print()
    {
        cout << endl;
        cout << "The name is : " << this->name << endl;
        cout << "The health is : " << this->health << endl;
        cout << "The level is : " << this->level << endl;
    }
};

int main()
{
    char name[8]="Animish";
    name[0]='S';
    Hero r(name,100,'B');
    r.print();

    Hero s(r);
    s.print();

/*The name is : Snimish
The health is : 100
The level is : B

The name is : Snimish
The health is : 100
The level is : B
*/

//we are only changing the value in first object but it is automatically done in second object.
//here we can say that it is doing SHALLOW COPY...

//to prevent this ....we hav to make the copy of the array created

}