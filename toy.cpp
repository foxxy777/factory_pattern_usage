#include <iostream>
using namespace std;

class toy {
protected:
    string name;
    float price;
public:
    virtual void preparepart() = 0;//���Ǵ����ˣ��������дpure
    virtual void combinepart() = 0;
};

class car : public toy {
public:
     void preparepart() { cout << "prepare car part" << endl; }
     void combinepart() { cout << "combine car part" << endl; }
};
class plane : public toy {
public:
    void preparepart() { cout << "prepare plane part" << endl; }
    void combinepart() { cout << "combine plane part" << endl; }
};