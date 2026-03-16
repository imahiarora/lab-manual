#include<iostream>
#include<iomanip>
using namespace std;
class Smartlight{
    private:
    string brand;
    int brightness;
    bool isOn;
     
    public:
    Smartlight(){
        brand="Unknown";
        isOn=0;
        brightness=50;
    }
    Smartlight(string b,int bright, bool status)
    {
        brand=b;
        brightness=bright;
        isOn=status;
    }
    void turnOn(){
        isOn= true;
        cout<<"\n light is on";
    }
    void turnOff(){
        isOn=false;
        cout<<"\n light is off";
    }
    void increaseBrightness(){
        if(brightness>0)
        {
            brightness+=10;
        }
        else if(brightness<0)
        {
            brightness=0;
        }
    }
    void decreaseBrightness(){
        if(brightness<100)
        {
            brightness-=10;}
            else if( brightness>100)
            {
                brightness=100;
            }
        
    }
    void displayBrightness ()
    {
        cout<<"\n brand"<<brand;
        cout<<"\n status"<<(isOn?"ON":"OFF");
        cout<<"\n brightness"<<brightness;
    }

};
int main()
{
    Smartlight light1;
    Smartlight light2("philips",70,true);
    light1.turnOn();
    light1.turnOff();
    light1.increaseBrightness();
    light1.displayBrightness();

    light2.turnOn();
    light2.turnOff();
    light2.decreaseBrightness();
    light2.displayBrightness();

    return 0;

}

