
#include <iostream>
#include <string>
#include "StreamingService.h"

/*#TODO 5: Implement the Streaming Service.*/

/**
 * HINTS:
 *    Destructor:
 *              Retrieve movies and actors as vectors.
 *              For each movie the vector, remove it form the bag, and delete it.
 *              For each actor in the vector, remove it form the bag and delete it.
 *    addMovie:
 *              should create (new) the new movie.
 *    addActor:
 *              should create the new actor.
 *
 *    addActorToMovie:
 *                      no creation of new objects here. just search.
 *                      make sure you didn't get a nullptr
 *
 *    isMovieAvailable:
 *                      use search
 *
 *    search (either actor or movie):
 *                      get the objects as vectors. compare the data here.
 *
 */
