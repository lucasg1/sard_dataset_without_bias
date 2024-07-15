void FUN0()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(GLOBAL_CONST_FIVE==5)
    {
        ; 
    }
    if(GLOBAL_CONST_FIVE!=5)
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
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(GLOBAL_CONST_FIVE==5)
    {
        ; 
    }
    if(GLOBAL_CONST_FIVE==5)
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
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
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
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(GLOBAL_CONST_FIVE==5)
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
