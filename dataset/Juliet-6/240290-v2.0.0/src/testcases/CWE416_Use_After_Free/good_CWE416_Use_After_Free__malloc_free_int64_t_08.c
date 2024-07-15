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
    int64_t * data;
    data = NULL;
    if(FUN0())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
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
    int64_t * data;
    data = NULL;
    if(FUN0())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
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
    int64_t * data;
    data = NULL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(FUN0())
    {
        printLongLongLine(data[0]);
    }
}
void FUN5()
{
    int64_t * data;
    data = NULL;
    if(FUN0())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(FUN0())
    {
        printLongLongLine(data[0]);
    }
}
