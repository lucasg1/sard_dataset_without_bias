void FUN0()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    data = -1;
    {
        short data = *dataPtr1;
        data = CHAR_MAX-5;
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
        {
            char charData = (char)data;
            printHexCharLine(charData);
        }
    }
}
