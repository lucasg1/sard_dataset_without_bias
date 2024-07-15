static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    data = -1;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = CHAR_MAX-5;
    }
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
void FUN1()
{
    int data;
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        data = CHAR_MAX-5;
    }
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
