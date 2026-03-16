#include<iostream>
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
    }
    void turnOff(){
        isOn=false;
    }
    void increaseBrightness(){
        if(brightness+10>100)
        {
            brightness=100;
           
        }
        else 
         brightness+=10;
    }
    void decreaseBrightness(){
        if(brightness-10<0)
        {
            brightness=0;
            
           }
            else
             brightness-=10;
        
    }
    void displayBrightness ()
    {
        cout<<"\n brand -"<<brand;
        cout<<"\n status is "<<(isOn?"ON":"OFF");
        cout<<"\n brightness -"<<brightness;
    }
    ~Smartlight(){cout<<"\n object destroyed ";};

};
int main()
{
    Smartlight light1;
    Smartlight light2("philips",70,true);
    light1.turnOff();
    light1.increaseBrightness();
    light1.displayBrightness();

    light2.turnOn();
    light2.decreaseBrightness();
    light2.displayBrightness();

    return 0;

}


