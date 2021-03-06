#ifndef _IMAGE_CONVERTER_H_ 
#define _IMAGE_CONVERTER_H_ 

#include <opencv/cv.h>
#include "ImageOperator.h"
#include "ManuscriptExport.h"

#include "ImageOperator.h"
#include "ManuscriptExport.h"

class ImageConverter : public ImageOperator {
public:
	ImageConverter(void);
	~ImageConverter(void);

	virtual DImage* convert() = 0;
};

#endif 
