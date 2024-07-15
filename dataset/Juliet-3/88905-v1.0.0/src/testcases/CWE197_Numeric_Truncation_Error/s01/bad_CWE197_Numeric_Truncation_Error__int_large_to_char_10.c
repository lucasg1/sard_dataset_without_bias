void FUN0()
{
    int data;
    data = -1;
    if(globalTrue)
    {
        data = SHRT_MAX + 5;
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
