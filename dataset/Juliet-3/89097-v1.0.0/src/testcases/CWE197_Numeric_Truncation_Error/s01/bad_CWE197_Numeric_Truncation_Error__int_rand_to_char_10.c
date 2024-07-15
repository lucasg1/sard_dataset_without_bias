void FUN0()
{
    int data;
    data = -1;
    if(globalTrue)
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
