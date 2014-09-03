#include "myKeyboardEventHandler.h"


bool myKeyboardEventHandler::handle(const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &aa)
{
   switch(ea.getEventType())
   {
        case(osgGA::GUIEventAdapter::KEYDOWN):
          {
             switch(ea.getKey())
             {
             case 'w':
                std::cout << "w key pressed" << std::endl;
                return false;
                break;
             default:
                return false;
             }
          }
        default:
          return false;
   }
}

