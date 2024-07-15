void FUN0()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    data = -1;
    {
        short data = *dataPtr1;
        data = (short)RAND32();
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
        {
<START>
            char charData = (char)data;
<END>
            printHexCharLine(charData);
        }
    }
}
