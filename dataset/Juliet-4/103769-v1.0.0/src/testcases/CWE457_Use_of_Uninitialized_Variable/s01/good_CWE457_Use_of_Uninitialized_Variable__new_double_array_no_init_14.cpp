namespace NAMESPACE0
{
void FUN0()
{
    double * data;
    data = new double[10];
    if(globalFive==5)
    {
        ; 
    }
    if(globalFive!=5)
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
        delete [] data;
    }
}
void FUN1()
{
    double * data;
    data = new double[10];
    if(globalFive==5)
    {
        ; 
    }
    if(globalFive==5)
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
        delete [] data;
    }
}
void FUN2()
{
    double * data;
    data = new double[10];
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
        delete [] data;
    }
}
void FUN3()
{
    double * data;
    data = new double[10];
    if(globalFive==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(globalFive==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printDoubleLine(data[i]);
            }
        }
        delete [] data;
    }
}
} 
