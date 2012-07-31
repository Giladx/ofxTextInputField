/**
 *  ofxTextInputField.cpp
 *  ofxTextInputField
 *
 *  Created by Elliot Woods on 12/09/2011.
 *  Copyright 2011 Kimchi and Chips.
 *
 *  modified by James George 2/12/2011 to work with ofxTimeline
 *  hacked on 26/7/2012 @ YCAM InterLab to work with new event structure
 *
 * MIT license
 * http://www.opensource.org/licenses/mit-license.php
 *
 */

#include "ofMain.h"

class ofxTextInputField {
  public:
	
	ofxTextInputField();
	
//	void enable();
//	void disable();
	
	void draw(int x, int y);
	void clear();
	void keyPressed(ofKeyEventArgs &a);
	
	string text;
	int cursorPosition;
	
	
protected:

	int		cursorx, cursory;
};
