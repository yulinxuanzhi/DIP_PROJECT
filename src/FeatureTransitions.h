#ifndef _FEATURETRANSITIONS_H_  
#define _FEATURETRANSITIONS_H_    
#include <math.h>
#include <opencv/cv.h>
#include <opencv2/highgui/highgui.hpp>
#include "Feature.h"

using namespace std;
using namespace cv ;

class FeatureTransitions:public Feature 
{
	//it�s main purpose is to calculate the number of transitions from �Black� (0) to �White� (255). 
	//This Feature can show us the number of �Curls� in any given letter, which will give us a strong comparing tool.  
protected :
	vector<int> _trans ;
public:
	FeatureTransitions(vector<int> trans);
	~FeatureTransitions(void){;}

	double distance(Feature* a);//calculates the Oclidian distance between two feature transitions featre
	void  sample2Row(Mat mat, int row);//assigns _avgsums to a specified row in the matrix
	vector<float> vectorize();//returns the vector
	
};

#endif
