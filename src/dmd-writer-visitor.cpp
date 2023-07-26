#include    "dmd-writer-visitor.h"

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
DMDWriterVisitor::DMDWriterVisitor(std::ofstream &stream) :
    osg::NodeVisitor(osg::NodeVisitor::TRAVERSE_ALL_CHILDREN)

{

}
