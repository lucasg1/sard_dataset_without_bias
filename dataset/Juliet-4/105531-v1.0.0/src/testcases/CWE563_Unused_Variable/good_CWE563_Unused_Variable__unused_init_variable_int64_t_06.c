static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int64_t data;
    data = 5LL;
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
    data = 5LL;
    if(STATIC_CONST_FIVE==5)
    {
        printLongLongLine(data);
    }
}
