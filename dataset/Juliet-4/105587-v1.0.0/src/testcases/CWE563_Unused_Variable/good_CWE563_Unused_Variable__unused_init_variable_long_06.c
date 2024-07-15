static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    long data;
    data = 5L;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLongLine(data);
    }
}
void FUN1()
{
    long data;
    data = 5L;
    if(STATIC_CONST_FIVE==5)
    {
        printLongLine(data);
    }
}
