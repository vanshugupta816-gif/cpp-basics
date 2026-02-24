// **** CONTAINERS IN C++ STL****

// STL = containers + algorithm + iterators
//            |           |           |
//     object which   procedure to  object which points to 
//     stores data    process data  an element of a container
 
//   CONTAINERS :
//  (1) |->  sequence containers --> linear fashion  |o->o->o->o|
//                                 e.g       -> vector
//                                           -> list
//                                           -> dequeue
//  (2) |->  associative containers  --> direct access  o
//                                                     / \  (tree)
//                                                     0  0  
//                                   e.g     -> set/multiset
//                                           -> map/multimap
//  (3) |->  derived containers --> real world modeling
//                                      e.g  -> stack (lifo)
//                                           -> queue (fifo)
//                                           -> priority queue

// SEQUENCE CONTAINER:
//  1. vector -> RA= fast  (RA = random access)
//             (middle)insertion |de|= slow
//             (deletion)insertion at the end ->= fast
// 2. list -> RA= slow
//            (middle)insertion = fast
//            (deletion)insertion at the end = fast
// ASSOCIATIVE CONTAINER: all operation fast except RA
// DERIVED CONTAINER: depends -> data structure
