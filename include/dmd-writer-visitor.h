#ifndef     DMD_WRITER_VISITOR_H
#define     DMD_WRITER_VISITOR_H

#include    <osg/NodeVisitor>

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
class DMDWriterVisitor : public osg::NodeVisitor
{
public:

    DMDWriterVisitor(std::ofstream &stream);

private:


};

#endif // DMD_WRITER_VISITOR_H
