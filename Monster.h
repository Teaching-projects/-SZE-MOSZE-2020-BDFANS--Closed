/**
 * @file Monster.h
 * @class Monster
 *
 * @author BDFANS
 *
 * @brief header for Monster class
 * @version 0.4.0
 *
 *
 * @date 2020-11-13
 *
 */
#pragma once

#include "Unit.h"


class Monster :public Unit
{


    public:

	/**
	* @brief JSON parser for Monster class
	*
    * @param filename is the name of the JSON file we read from
    * 
	* @return Monster object
	*
	* @throw Exception this function throws an exception if the file cannot be accessed
	*/
    static Monster parse(std::string filename);


    /**
    * @brief Construct a new Monster object
    *
    * @param indmg sets the physical damage and magical damage of the monster.The default damages are 0
    * @param innev sets the name of the monster.The default name is "default"
    * @param inhp sets the health of the monster.The default health is 1
    * @param indef sets the defense of the monster.Te default defense is 1
    * @param insaspeed sets the attackspeed of the monster.The default speed is 1.0
    */
    Monster(std::string innev,int inhp,int inphys,int inmagic,int indef,double inaspeed) :Unit(innev,inhp,inphys,inmagic,indef,inaspeed)  {}
};