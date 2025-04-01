#include "Utils.h"

void setColor(Color color) 
{
    switch (color) 
	{
    	case RED:
	    	glColor3f(1.0f, 0.0f, 0.0f);
	    	break;
	  	case GREEN:
	    	glColor3f(0.0f, 1.0f, 0.0f);
	    	break;
	  	case BLUE:
		    glColor3f(0.0f, 0.0f, 1.0f);
		    break;
	  	case YELLOW:
		    glColor3f(1.0f, 1.0f, 0.0f);
		    break;
	  	case WHITE:
		    glColor3f(1.0f, 1.0f, 1.0f);
		    break;
		  case BLACK:
		    glColor3f(0.0f, 0.0f, 0.0f);
		    break;
	  	default:
		    glColor3f(1.0f, 1.0f, 1.0f);
		    break;
    }
}
