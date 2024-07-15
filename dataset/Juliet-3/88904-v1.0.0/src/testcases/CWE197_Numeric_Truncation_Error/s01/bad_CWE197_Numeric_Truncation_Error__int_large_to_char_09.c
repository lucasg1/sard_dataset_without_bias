void FUN0()
{
    int data;
    data = -1;
    if(GLOBAL_CONST_TRUE)
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
