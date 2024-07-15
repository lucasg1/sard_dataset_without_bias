void FUN0()
{
    int data;
    data = -1;
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        data = CHAR_MAX-5;
    }
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
