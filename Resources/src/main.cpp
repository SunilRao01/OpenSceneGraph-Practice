#include <osgViewer/Viewer>
#include <osg/ShapeDrawable>
#include <osgViewer/ViewerEventHandlers>
#include <osgGA/StateSetManipulator>
#include <myKeyboardEventHandler.h>

int main()
{
    //Creating the viewer
    osgViewer::Viewer viewer;

    //Creating the root node
    osg::ref_ptr<osg::Group> root (new osg::Group);

    // CYLINDER NODE
    //The geode containing our shape
    osg::ref_ptr<osg::Geode> myshapegeode (new osg::Geode);

    //Create a box
    osg::ref_ptr<osg::Box> myBox (new osg::Box(osg::Vec3(1, 1, 1), 1));

    //Add box shape to OSG drawable
    osg::ref_ptr<osg::ShapeDrawable> boxDrawable (new osg::ShapeDrawable(myBox.get()));

    // Add drawable (containing the box) to geode
    myshapegeode->addDrawable(boxDrawable.get());

    // Add geode node to OSG graph
    root->addChild(myshapegeode.get());

    //Add a window size handler to the viewer (Pressing 'F' toggles fullscreen)
    viewer.addEventHandler(new osgViewer::WindowSizeHandler);

    // KEYBOARD INPUT
    // Create keyboard event handler
    myKeyboardEventHandler *myFirstEventHandler = new myKeyboardEventHandler();

    // Add keyboard event handler to osgviewer
    viewer.addEventHandler(myFirstEventHandler);

    // Connect OSG viewer with the OSG graph's root node
    viewer.setSceneData(root.get());

    //The viewer.run() method starts the threads and the traversals.
    return (viewer.run());
}
