static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    if(staticTrue)
    {
        ; 
    }
    if(staticFalse)
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
    data = (double *)ALLOCA(10*sizeof(double));
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
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
    data = (double *)ALLOCA(10*sizeof(double));
    if(staticFalse)
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
    if(staticTrue)
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
    data = (double *)ALLOCA(10*sizeof(double));
    if(staticTrue)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticTrue)
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
