namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = NULL;
        data = (long *)realloc(data, 100*sizeof(long));
        if (data == NULL) {exit(-1);}
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
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = NULL;
        data = (long *)realloc(data, 100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrue())
    {
        free(data);
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long[100];
    }
    if(globalReturnsTrue())
    {
        delete [] data;
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long[100];
    }
    if(globalReturnsTrue())
    {
        delete [] data;
    }
}
} 
