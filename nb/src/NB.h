#ifndef NB_H_
#define NB_H_
/** \defgroup NB Numeric Bench
 * the group is wished to support simulation of molecule machine in heat environment
 * There should be several layers.
 * For the efficiency, all massive simulation should be performed in the math
 * layer.
 * Above math layer is physics level, which reduces physical concepts into mathematical concepts.
 * Above physics layer is methods level which defines methods on physical systems
 * In the math level there should be only several classes, numbers, vectors, matrix. it should have
 * methods linear algebra, differential equation, optimization, ...
 * In the physics layer, there should be objects time, space, matter, change.
 * In the method layer, there should be objects experiments, feedback, reactions
 * and so on.
 * There should be reduction method for every concept beyond sys layer. Every object should be reduced
 * to objects in the lower layer.
 * object is constructed by low level data and high level meta-data that discribe
 * the meaning of data, like a vector is array, which is data, plus some meta-data
 * that gives the size, head pointer and tail pointer of the data.
 * the problem of object orient numeric simulation is that we want to use efficient
 * libraries written by other people. Those libs only treat data, so I have to
 * strip off the meta data from my object and send the data to the libs. So in
 * designing, every class should internally use data type that is commonly used
 * by popular libs, that allows us to easily send row data to libs. in cases that
 * multiple data types are used in libs, like complex<double>, double _Complex,
 * I have to provide method to reduce other data type to a simple one, say double [2]
 * There should be view classes which doesn't have data, instead, they provide
 * some kind of view of of the data with help of its own meta data. this allows us to
 * reduce complex object to simple data that can be handled by libs. for example
 * a matrix view is some meta data of dim2 and dim2 and double *pm, but it doesn't create
 * or free the memory pointed by pm.
 */

#include "math/NB_math.h"
#include "phys/NB_phys.h"
#include "theory/NB_theory.h"
#include "sys/NB_sys.h"


#endif
