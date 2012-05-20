#include "ASCIISTLParser.h"
#include "Mesh.h"
#include <boost/algorithm/string.hpp>
#include <fstream>
#include <boost/regex.hpp>

using namespace std;
using namespace boost;

namespace ProcessPlanning
{
	ASCIISTLParser::ASCIISTLParser(void)
	{
	}


	ASCIISTLParser::~ASCIISTLParser(void)
	{
	}

	Vector* ASCIISTLParser::getNormal(string line)
	{
		regex rNormal("facet normal ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?) ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?) ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?)");
        cmatch content;
        Vector* v;

        if (regex_match(line, content, rNormal))
        {
            v = new Vector(content[0], content[1], content[2]);
        }
        return v;
	}

	Point* ASCIISTLParser::getVertex(string line)
	{
		regex rVertex("vertex ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?) ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?) ([-+]?[0-9]*.?[0-9]+([eE][-+]?[0-9]+)?)");
        cmatch content;
        Point* p;

        if (regex_match(line, content, rVertex))
        {   // TODO: need to use the PointFactory
            p = new Point(content[0], content[1], content[2]);
        }
        return p;
	}

	Mesh* ASCIISTLParser::parseFile(void)
	{
		string fn = getFileName(); // STL filename
		string line;
        Triangle* t;
		Mesh* m = new Mesh();

		ifstream input(fn.c_str());
        while (getline(input, line))
        {
            trim(line);
            if (find_first(line, "facet")) // we have the normal vector data
            {
                t = new Triangle();
                t->addVector(getNormal(line));
            }
            else if (find_first(line, "vertex")) // we have vertex data
            {
                t->addVertex(getVertex(line));
            }
            else if (find_first(line, "endloop"))
            {
                m->addTriangle(t);
                t = NULL;
            }
        }

		return m;
	}

	bool ASCIISTLParser::checkSTLFile(void) const
	{
		string fn = getFileName(); // STL filename

		ifstream input;

		input.open(fn.c_str());  // trying to read the file

		if (!input)
		{
			throw "Could not open STL file!";
		}

		// TODO: Better checking

		input.close();
	}

}

