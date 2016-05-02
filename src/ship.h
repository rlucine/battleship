/*=========================================================*//**
 * @file ship.c
 * @brief Definition of Battleship ships
 *//*=========================================================*/

#ifndef _SHIP_H_
#define _SHIP_H_

/*============================================================*
 * Ship definitions
 *============================================================*/

/*-----------------------------------------*//**
 * @brief Enumeration of all ships
 *//*-----------------------------------------*/
typedef enum {
    EMPTY      = -1,
    CARRIER    =  0,
    BATTLESHIP =  1,
    SUBMARINE  =  2,
    CRUISER    =  3,
    DESTROYER  =  4,
} Ship;

// Macros
#define N_SHIPS 5

/*============================================================*
 * Function definitions
 *============================================================*/

/*-----------------------------------------*//**
 * @brief Get the name of a Ship
 * @param ship      The ship to name
 * @return The ship's name or NULL on failure
 *//*-----------------------------------------*/
const char *ship_GetName(Ship ship);

/*-----------------------------------------*//**
 * @brief Get the length of a Ship
 * @param ship      The ship to examine
 * @return The ship's length or -1 on failure
 *//*-----------------------------------------*/
int ship_GetLength(Ship ship);

/*============================================================*/
#endif