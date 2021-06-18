/**
 * Laboratory #1 - CSCI2421 - Summer 2021
 * File: main.cpp
 */

#include <iostream> // For cout and cin
#include <string>   // For string objects
#include "Actor.h"
#include "Movie.h"
#include "StreamingService.h"



using namespace std;

int main()
{
    cout << string(80, '*')  << endl;
    cout << string(30, ' ')<< "LABORATORY #2"  << endl;
    cout << string(80, '*')  << endl;

    /**** SOME TESTS  */
    /*
    Actor* a1 = new Actor("John");
    cout<<a1->getName()<<endl;
    cout<<*a1<<endl;
    Actor* a2= new Actor("Alice");
    cout<<a2->getName()<<endl;
    cout<<*a2<<endl;


    cout<<endl;cout<<endl;
    Movie* m1 = new Movie("Movie 1",2021);
    cout<<*m1<<endl;
    cout<<"Adding John="<<m1->addActor(a1)<<endl;
    cout<<"Adding Alice="<<m1->addActor(a2)<<endl;
    cout<<"Adding John="<<m1->addActor(a1)<<endl;
    cout<<*m1<<endl;

    cout<<endl;cout<<endl;
    delete a1;
    delete a2;
    delete m1;


    StreamingService* myService = new StreamingService();
    myService->addActor("Daniel Radcliffe");
    myService->addActor("Emma Watson");
    myService->addActor("Rupert Grint");


    myService->addMovie("Harry Potter and the Philosopher's Stone", 2001);

    myService->addActorToMovie("Harry Potter and the Philosopher's Stone", "Daniel Radcliffe");
    myService->addActorToMovie("Harry Potter and the Philosopher's Stone", "Emma Watson");
    myService->addActorToMovie("Harry Potter and the Philosopher's Stone", "Rupert Grint");

    myService->addMovie("Harry Potter and the Chamber of Secrets",  2002);
    myService->addActorToMovie("Harry Potter and the Chamber of Secrets", "Daniel Radcliffe");
    myService->addActorToMovie("Harry Potter and the Chamber of Secrets", "Emma Watson");
    cout << *myService;

    delete myService;
    */


    /*********************************************************
     *         IMPLEMENT YOUR MAIN PROGRAM HERE
     *********************************************************/
    /*TODO 6: Finally implement your menu program*/

    cout << "Program Terminated." <<endl;
};
