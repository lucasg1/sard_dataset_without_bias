static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int64_t data;
    if(STATIC_CONST_FIVE==5)
    {
        data = 5LL;
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLongLongLine(data);
    }
}
void FUN1()
{
    int64_t data;
    if(STATIC_CONST_FIVE==5)
    {
        data = 5LL;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLongLongLine(data);
    }
}
void FUN2()
{
    int64_t data;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5LL;
        printLongLongLine(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        data = 10LL;
        printLongLongLine(data);
    }
}
void FUN3()
{
    int64_t data;
    if(STATIC_CONST_FIVE==5)
    {
        data = 5LL;
        printLongLongLine(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        data = 10LL;
        printLongLongLine(data);
    }
}
