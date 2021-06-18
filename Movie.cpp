#include <iostream>
#include "Movie.h"

/*#TODO 4: implement Movie*/
/**
* Hints:
*  Destructor:
*      Get the vector of actors. Then for each actor remove it from the bag
*
*  addActor:
*       if the actor is in the bag return false, else return what the bag add method returns.
*/
Movie::Movie() {

}

Movie::Movie(const string &aTitle, int year) {

}

Movie::~Movie() {

}

string Movie::getTitle() const {
    return std::string();
}

void Movie::setTitle(const string &aTitle) {

}

int Movie::getReleaseYear() const {
    return 0;
}

void Movie::setReleaseYear(int year) {

}

bool Movie::addActor(Actor *&anActor) {
    return false;
}

bool Movie::removeActor(Actor *&anActor) {
    return false;
}

vector<Actor *> Movie::getActors() const {
    return vector<Actor *>();
}
