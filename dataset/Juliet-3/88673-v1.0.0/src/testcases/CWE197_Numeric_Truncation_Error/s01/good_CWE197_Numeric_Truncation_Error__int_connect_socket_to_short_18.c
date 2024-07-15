void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    data = CHAR_MAX-5;
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
