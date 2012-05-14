/*
 * =====================================================================================
 *
 *       Filename:  SimpleSlicer.cpp
 *
 *    Description:  Simple Slicer Class implementation
 *
 *        Version:  1.0
 *        Created:  08/05/2012 08:39:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rodrigo Habib Gregori (), rodrigo.gregori@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "SimpleSlicer.h"

namespace ProcessPlanning
{
    SimpleSlicer::SimpleSlicer(void)
    {

    }

    SimpleSlicer::~SimpleSlicer(void)
    {

    }

    float SimpleSlicer::getSliceThickness(void) const
    {
        return sliceThickness;
    }

    void SimpleSlicer::setSliceThickness(const float st)
    {
        sliceThickness = st;
    }

    SimpleSlicer::sliceMesh(Mesh* m)
    {
       //for each z plane, from 0 to maximum solid height
       //for each triangle
       //try to slice the triangle and start building the contour
    }
}
