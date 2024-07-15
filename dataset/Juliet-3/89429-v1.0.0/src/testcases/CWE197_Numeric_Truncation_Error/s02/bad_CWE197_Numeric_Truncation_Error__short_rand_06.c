static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    short data;
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        data = (short)RAND32();
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
