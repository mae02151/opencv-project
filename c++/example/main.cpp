#include <iostream>
#include <stdlib.h>

class Robot
{
public:
    Robot(const int _sensor)
    {
    sensor = _sensor;
    count = 0;

    }

    void sensing()
    {
        if(sensor == 1) {
            ++count;
        std::cout << "Traffic light is Red Stop! :" " "<< count << " 번 검출" << std::endl; }
        else
        if(sensor == 2) {
            ++count;
        std::cout << "Traffic light is Yellow Stop!:" " " << count << " 번 검출" << std::endl; }
        else
        if(sensor == 3) {
            ++count;
        std::cout << "Traffic light is Green Go!:" " " << count << " 번 검출" << std::endl; }


    }
protected:

int sensor;
int count ;

};


class raidar : public Robot
{
public:
    raidar() : Robot(1) { }  //레이더 회전 하는 식
    void start() {
            ++count;
        std::cout <<"radiar start" << std::endl;
        std::cout <<"detect :" " "<< sensor*10/2 << "m" "  " <<count<< std::endl;

        }

};


int main()
{
int _sensor;
    std::cout << "sensor input (1:red, 2:yellow, 3:green):" ;
    std::cin >> _sensor;
    Robot senser(_sensor);

    senser.sensing();

    raidar rai;
    rai.start();
    std::cout << std::endl;

    return 0;

}

