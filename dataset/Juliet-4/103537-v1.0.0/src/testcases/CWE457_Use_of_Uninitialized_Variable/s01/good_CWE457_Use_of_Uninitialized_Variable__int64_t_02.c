void FUN0()
{
    int64_t data;
    if(1)
    {
        ; 
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
void FUN1()
{
    int64_t data;
    if(1)
    {
        ; 
    }
    if(1)
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
void FUN2()
{
    int64_t data;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5LL;
    }
    if(1)
    {
        printLongLongLine(data);
    }
}
void FUN3()
{
    int64_t data;
    if(1)
    {
        data = 5LL;
    }
    if(1)
    {
        printLongLongLine(data);
    }
}
