#pragma once

#include "ofMain.h"

class guiCustomImpl{

     public:

        guiCustomImpl(){
            mouseIsRelative = false;
        }

        virtual ~guiCustomImpl(){

        }

        virtual void saveSettings(string filename){}
        virtual void reloadSettings(){}
        virtual void saveSettings(){}
        virtual void loadSettings(string filename){}

        virtual  void update(){}
        virtual  void draw(float x, float y, float w, float h){}
    
        virtual void mouseMoved(int x, int y) = 0;
        virtual void mouseDragged(int x, int y, int button) = 0;
        virtual void mousePressed(int x, int y, int button) = 0;
        virtual void mouseReleased(int x, int y, int button) = 0; 

        virtual bool keyPressed(int key) {}
        virtual bool keyReleased(int key) {}

        bool mouseIsRelative;
		ofRectangle boundingRect;
};
