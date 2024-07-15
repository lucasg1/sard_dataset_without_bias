void FUN0()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(globalTrue)
    {
        ; 
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}
void FUN1()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(globalTrue)
    {
        ; 
    }
    if(globalTrue)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}
void FUN2()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(globalTrue)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}
void FUN3()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    if(globalTrue)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(globalTrue)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
    }
}
