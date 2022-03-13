#include <iostream>
#include "source.hh"

using namespace std;


//=================================//
// Global structures definitons    //
//=================================//

int gTime = 0;

// create a global heap
class Heap eventsHeap;


//=================================//
// Functions                       //
//=================================//

int getCurrTick()
{
    gTime += 10;
    return gTime;
}

int main()
{
       
    int counterid = 0;
    class Simulator* sim = new Simulator();

    sim->setHeap(&eventsHeap);

    sim->insert(new Event(1, 0));

    /*
    for(int i = 0; i < 10; i++)
    {
        sim->insert(new Event( counterid++, getCurrTick() ));
    }
    */
    sim->doAllEvents();

   
   // priority_queue< int, vector<int>, greater<int> > basicheap;


//    basicheap.push(10);

  //  std::cout << basicheap.top() << endl;

    // delete sim object
    delete sim;

    return;
}