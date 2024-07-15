void FUN0()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        ; 
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        printLongLine(data[0]);
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        printLongLine(data[0]);
    }
}
