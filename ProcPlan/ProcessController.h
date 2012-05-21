/*
 * =====================================================================================
 *
 *       Filename:  ProcessController.h
 *
 *    Description:  Controller class for the process planning
 *
 *        Version:  1.0
 *        Created:  08/05/2012 10:26:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rodrigo Habib Gregori (), rodrigo.gregori@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#pragma once
#include "stdafx.h"
#include "STLParser.h"
#include <string>
//#include "RasterCalculator.h" //TODO: not sure whether using raster
//#include "OffsetCalculator.h" //TODO: not sure whether using offset calculator
//#include "Slicer.h"

using namespace std;
namespace ProcessPlanning
{
    class ProcessController
    {
    private:
		Mesh* mesh;
		Solid* solid;
        STLParser *stlParser;
        //RasterCalculator rasterCalc;
        //OffsetCalculator offsetCalc;
        //Slicer slicer;

    public:
        ProcessController(void);
        ~ProcessController(void);

        void setSTLParser(STLParser *stlParser);
        //void setRasterCalc(RasterCalculator rasterCalc) const;
        //void setOffsetCalc(OffsetCalculator offsetCalc) const;
        //void setSlicer(Slicer slicer) const;
		void parseSTLFromFile(string fileName);
    };
}
