static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(FUN0())
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(FUN1())
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
void FUN3()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(FUN0())
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(FUN0())
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
void FUN4()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(FUN1())
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
    if(FUN0())
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
void FUN5()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(FUN0())
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(FUN0())
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
