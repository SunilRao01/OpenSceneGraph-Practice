#ifndef MYKEYBOARDEVENTHANDLER_H
#define MYKEYBOARDEVENTHANDLER_H

#include <osgGA/GUIEventHandler>
#include <iostream>
#include <boxInputDeviceStateType.h>

class myKeyboardEventHandler : public osgGA::GUIEventHandler
{
public:
   virtual bool handle(const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &);

   virtual void accept(osgGA::GUIEventHandlerVisitor &v)
    {
        v.visit(*this);
    };

};

#endif // MYKEYBOARDEVENTHANDLER_H
