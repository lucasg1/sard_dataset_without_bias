namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(1)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(0)
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
    if(1)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(1)
    {
        ; 
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(1)
    {
        printLongLine(*data);
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(1)
    {
        data = new long;
        *data = 5L;
    }
    if(1)
    {
        printLongLine(*data);
    }
}
} 
