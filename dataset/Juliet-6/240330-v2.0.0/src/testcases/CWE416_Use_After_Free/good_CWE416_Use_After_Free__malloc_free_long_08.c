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
    long * data;
    data = NULL;
    if(FUN0())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(FUN0())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    if(FUN0())
    {
        ; 
    }
}
void FUN4()
{
    long * data;
    data = NULL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(FUN0())
    {
        printLongLine(data[0]);
    }
}
void FUN5()
{
    long * data;
    data = NULL;
    if(FUN0())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(FUN0())
    {
        printLongLine(data[0]);
    }
}
