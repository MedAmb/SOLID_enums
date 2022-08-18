#ifndef __SHAPE_H__
#define __SHAPE_H__

namespace SOLID
{
    class Shape
    {
    public:
        Shape() = default;
        virtual ~Shape() = default;
        virtual bool draw() = 0;
    };
}

#endif