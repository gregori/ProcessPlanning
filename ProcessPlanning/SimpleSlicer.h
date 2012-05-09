/*
 * =====================================================================================
 *
 *       Filename:  SimpleSlicer.h
 *
 *    Description:  Simple Slicer class
 *
 *        Version:  1.0
 *        Created:  08/05/2012 08:36:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rodrigo Habib Gregori (), rodrigo.gregori@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#pragma once

#include "Slicer.h"

namespace ProcessPlanning
{
    class SimpleSlicer :
        public  Slicer
    {
    private:
        float sliceThickness;

    public:
        SimpleSlicer(void);
        ~SimpleSlicer(void);

        float getSliceThickness(void) const;
        void setSliceThickness(const float st);

        Solid* sliceMesh(Mesh* m);

    }
};
