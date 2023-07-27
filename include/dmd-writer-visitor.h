#ifndef     DMD_WRITER_VISITOR_H
#define     DMD_WRITER_VISITOR_H

#include    <osg/NodeVisitor>
#include    <osg/Geometry>

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
class DMDWriterVisitor : public osg::NodeVisitor
{
public:

    DMDWriterVisitor(std::ostream &stream);

    virtual void apply(osg::Geometry &geom);

private:

    std::ostream &stream;
};

#endif // DMD_WRITER_VISITOR_H
