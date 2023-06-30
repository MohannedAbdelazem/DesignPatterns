#ifndef __ShortView__
#define __ShortView__
#include "view.h"
class ShortView: public view{
    public:
    ShortView(Iresource* res) : view(res){}
    void show();
};

#endif