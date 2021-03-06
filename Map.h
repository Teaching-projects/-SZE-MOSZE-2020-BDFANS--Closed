/**
 * @file Map.h
 * @class Map
 *
 * @author BDFANS
 *
 * @brief header for Map class
 * @version 0.4.0
 *
 *
 * @date 2020-11-26
 *
 */
#pragma once

#include <iostream>
#include <string>
#include <vector>


#define MAPMATRIX std::vector<std::vector<type>> 

///This enum represents the map features(Free tiles and Walls)
enum type {Free,Wall};

class Map
{

protected:
    //The actual map stored in a vector matrix of "type"
    MAPMATRIX loadedmap;
    ///Width of the map
    int lenX;
    ///Length of the map
    int lenY;


public:

    ///The exception thrown when the map is indexed outside of its bounds
    class WrongIndexException : public std::runtime_error {
    public:
        explicit WrongIndexException(const std::string& errMsg) : std::runtime_error(errMsg) {};
    };
    
    /**
     * @brief Construct a new Map object
     * 
     * @param filename the name of the file used to generate the map
     * 
     * The with and the height of the mag gets automaticly calulated.
     * Use '#', whitespace and linebreak characters to create the map. invalid characters get ignored when generating the map
     * Undefined regions become "Wall" type on default
     */
    explicit Map(const std::string& filename) ;

    Map() {};


    /**
     * @brief loads and generates the map from file
     * 
     * @param filename name of the file used to generate the map.
     * 
     */
    void loadMap(std::string filename);

    /**
     * @brief Return the type of tile located at the coordinates
     * 
     * @param x the X coordinates
     * @param y the Y coordinates
     * @return type the type of the tile
     * 
     * @throw WrongIndexException this exception is thrown when the map is indexed outside of its bounds
     */
    type get(int x, int y) const;


    ///return the width of the map
    int getlenX() const
    {
        return lenX;
    }

    ///returns the length of the map
    int getlenY() const
    {
        return lenY;
    }


};