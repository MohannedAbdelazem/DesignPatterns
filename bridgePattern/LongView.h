#ifndef __LongView__
#define __LongView__
#include "view.h"
class LongView: public view{
    public:
    LongView(Iresource * res):view(res){}
    void show();
};

#endif