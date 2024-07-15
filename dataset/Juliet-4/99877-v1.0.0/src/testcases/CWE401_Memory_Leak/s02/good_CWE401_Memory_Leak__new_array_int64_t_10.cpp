namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int64_t[100];
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete[] data;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int64_t[100];
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalTrue)
    {
        delete[] data;
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
        int64_t VAR1[100];
        data = VAR1;
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
        int64_t VAR1[100];
        data = VAR1;
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalTrue)
    {
        ; 
    }
}
} 
