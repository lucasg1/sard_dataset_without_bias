namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int64_t * FUN0(int64_t * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t[100];
    }
    return data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    VAR1 = 0; 
    data = FUN0(data);
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        delete [] data;
    }
    ;
}
static int64_t * FUN2(int64_t * data)
{
    if(VAR2)
    {
        data = new int64_t[100];
    }
    return data;
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    VAR2 = 1; 
    data = FUN2(data);
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        delete [] data;
    }
    ;
}
} 
