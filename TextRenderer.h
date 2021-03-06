/**
 * @file TextRenderer.h
 * @class TextRenderer
 * 
 * @author BDFANS
 * 
 * @brief The abstract class used as the interface for text based maprendering solutions 
 * 
 * @version 0.9.0
 * 
 * @date 2020-12-06
 * 
 */
#pragma once

#include "Renderer.h"
#include <iostream>

#define TOP_LEFT "\u2554"
#define TOP_RIGHT "\u2557"
#define BOTTOM_LEFT "\u255A"
#define BOTTOM_RIGHT "\u255D"
#define HORIZONTAL "\u2550\u2550"
#define VERTICAL "\u2551"
#define FREE "\u2591\u2591"
#define WALL "\u2588\u2588"
#define SINGLEMONSTER "M\u2591"
#define MULTIPLEMONSTERS "MM"
#define HERO "\u2523\u252B"


class TextRenderer: public virtual Renderer
{
protected:
    std::ostream& out_stream;  ///< The outputstream used by the renderer

public:

    /**
     * @brief Set the out_stream object
     * 
     * @param o  the ostream used to change out_stream
     */
    void setOutputStream(std::ostream& o) {out_stream.copyfmt(o);}

    /**
     * @brief Construct a new TextRenderer object
     * 
     * uses std::cout as default ostream
     */
    TextRenderer()  :out_stream(std::cout) {}

    /**
     * @brief Construct a new TextRenderer object
     * 
     * @param in the ostream object used as the ostream
     */
    explicit TextRenderer(std::ostream& in) :out_stream(in) {}

    virtual ~TextRenderer() {}
};