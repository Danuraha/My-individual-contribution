#include "servoFunctions.c"
#include "flexFunctions.c"
#include "fsrFunctions.c"
#include "ultraSonicFunctions.c"

int main()
{
    void loop()
    {

        if((*positionLogic()==5)&& trigger==1)
        {
            servoStop();
        }
        else if ((*positionLogic()==1)&& trigger==1 && (ultraSonicVal()>=10))
        {
            servo1Right();
        }
        else if ((*positionLogic()==2)&& trigger==1 && (ultraSonicVal()>=10))
        {
            servo1Left();
        }

        else if((*(positionLogic()+2)==3)&& trigger==1 && (ultraSonicVal()>=10))
        {
            servo3Up();
        }
        else if((*(positionLogic()+2)==4)&& trigger==1 && (ultraSonicVal()>=10))
        {
            servo3Down();
        }

        else if((trigger==1) && (fsrVal()<=5))
        {
           flex();
        }

        else if ((trigger==1) && (fsrVal()>=5))
        {
            stopGripper();
        }

    }
}
