#include    "dmd-writer-visitor.h"

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
DMDWriterVisitor::DMDWriterVisitor(std::ostream &stream) :
    osg::NodeVisitor(osg::NodeVisitor::TRAVERSE_ALL_CHILDREN)
  , stream(stream)

{

}

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
void DMDWriterVisitor::apply(osg::Geometry &geom)
{
    osg::Vec3Array *vertices = static_cast<osg::Vec3Array *>(geom.getVertexArray());

    osg::PrimitiveSet *prim_set = geom.getPrimitiveSet(0);

    int numverts = vertices->getNumElements();

    int numfaces = prim_set->getNumPrimitives();

    stream << "New object" << std::endl
           << "TriMesh()" << std::endl
           << "numverts numfaces" << std::endl
           << "\t" << numverts << "\t" << numfaces << std::endl
           << "Mesh vertices:" << std::endl;

    for (int i = 0; i < numverts; ++i)
    {
        stream << "\t" << vertices->at(i).x() << " "
               << vertices->at(i).y()
               << vertices->at(i).y() << std::endl;
    }

    traverse(geom);
}
