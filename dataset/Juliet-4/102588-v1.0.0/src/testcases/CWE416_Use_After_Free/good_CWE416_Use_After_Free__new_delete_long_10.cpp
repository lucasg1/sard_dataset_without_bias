namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(globalTrue)
    {
        ; 
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(globalTrue)
    {
        printLongLine(*data);
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = new long;
        *data = 5L;
    }
    if(globalTrue)
    {
        printLongLine(*data);
    }
}
} 
