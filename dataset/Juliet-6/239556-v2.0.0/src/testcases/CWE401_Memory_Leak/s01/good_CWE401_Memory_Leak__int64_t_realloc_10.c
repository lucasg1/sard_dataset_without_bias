void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalTrue)
    {
        free(data);
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)ALLOCA(100*sizeof(int64_t));
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalTrue)
    {
        ; 
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (int64_t *)ALLOCA(100*sizeof(int64_t));
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalTrue)
    {
        ; 
    }
}
