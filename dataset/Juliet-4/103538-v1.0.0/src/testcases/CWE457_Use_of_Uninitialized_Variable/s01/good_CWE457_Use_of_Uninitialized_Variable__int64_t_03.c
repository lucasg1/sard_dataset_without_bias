void FUN0()
{
    int64_t data;
    if(5==5)
    {
        ; 
    }
    if(5!=5)
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
    if(5==5)
    {
        ; 
    }
    if(5==5)
    {
        data = 5LL;
        printLongLongLine(data);
    }
}
void FUN2()
{
    int64_t data;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5LL;
    }
    if(5==5)
    {
        printLongLongLine(data);
    }
}
void FUN3()
{
    int64_t data;
    if(5==5)
    {
        data = 5LL;
    }
    if(5==5)
    {
        printLongLongLine(data);
    }
}
