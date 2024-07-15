void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalReturnsTrue())
    {
        free(data);
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)ALLOCA(100*sizeof(int64_t));
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int64_t *)ALLOCA(100*sizeof(int64_t));
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
