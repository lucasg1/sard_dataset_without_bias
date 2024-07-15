void FUN0()
{
    int h;
    int data;
    data = -1;
    for(h = 0; h < 1; h++)
    {
        data = CHAR_MAX-5;
    }
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
