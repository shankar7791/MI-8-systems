#include <iostream>
#include <vector>

using namespace std;
class Animal
{
public:
    virtual void pet() const
    {
        cout << "I like generic Animals !!" << endl;
    }
    virtual ~Animal() {}
};

class Wolf : public Animal
{
public:
    void pet() const
    {
        cout << "wolf!!!" << endl;
    }
};

class Fish : public Animal
{
public:
    void pet() const
    {
        cout << "fish1!" << endl;
    }
};

class GoldFish : public Fish
{
public:
    void pet() const
     {
        cout << "goldfish!" << endl;
     }
};


class OtherAnimal : public Animal
{

};

int main()
{
    std::vector<Animal*> animals;
    animals.push_back( new Animal()) ;
    animals.push_back( new Wolf() );
    animals.push_back( new Fish() );


      std::vector<GoldFish*> goldfish;
      goldfish.pop_back();

      std::vector<OtherAnimal*> other;
      other.pop_back();


    for( std::vector<Animal*>::const_iterator it = animals.begin();
       it != animals.end(); ++it)
    {
        (*it)->pet();
        delete *it;
    }

   return 0;
}
