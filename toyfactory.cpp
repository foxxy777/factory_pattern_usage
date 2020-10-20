#include "toy.cpp"

class toyfactory {
public:
     static toy* CreatToy(int type) {//这里用static的作用是，有了static声明之后，这个函数哪怕没有实例出对象也可以直接用
        toy* toy_ptr = NULL;
        switch (type) {
        case 1:
        {
            toy_ptr = new car;
            break;
        }
        case 2:
        {
            toy_ptr = new plane;
            break;
        }
        default:
            ;
        }

        toy_ptr->preparepart();
        toy_ptr->combinepart();
        return toy_ptr;
    }

};