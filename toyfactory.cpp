#include "toy.cpp"

class toyfactory {
public:
     static toy* CreatToy(int type) {//������static�������ǣ�����static����֮�������������û��ʵ��������Ҳ����ֱ����
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