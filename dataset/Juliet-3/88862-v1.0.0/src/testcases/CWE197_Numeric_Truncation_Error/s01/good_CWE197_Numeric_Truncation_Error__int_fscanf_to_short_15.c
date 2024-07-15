void FUN0()
{
    int data;
    data = -1;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = CHAR_MAX-5;
        break;
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
    switch(6)
    {
    case 6:
        data = CHAR_MAX-5;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
