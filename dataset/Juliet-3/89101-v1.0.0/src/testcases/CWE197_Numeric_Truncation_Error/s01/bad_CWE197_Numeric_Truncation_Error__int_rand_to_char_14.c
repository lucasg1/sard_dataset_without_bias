void FUN0()
{
    int data;
    data = -1;
    if(globalFive==5)
    {
        data = RAND32();
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
