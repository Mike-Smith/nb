#ifndef NB_H_
#define NB_H_
/** \defgroup NB Numeric Bench
 * the group is wished to support simulation of molecule machine in heat environment
 * There should be several layers.
 * For the efficiency, all massive simulation should be performed in the math
 * layer.
 * Above math layer is physics level, which reduces physical concepts into mathematical concepts.
 * Above physics layer is methods level which defines methods on physical systems
 * In the math level there should be only several objects, numbers, vectors, matrix. it should have
 * methods linear algebra, differential equation, optimization, ...
 * In the physics layer, there should be objects time, space, matter, change.
 * In the method layer, there should be objects concept,statistics, experiments, feedback, reactions
 * and so on.
 */
#endif
