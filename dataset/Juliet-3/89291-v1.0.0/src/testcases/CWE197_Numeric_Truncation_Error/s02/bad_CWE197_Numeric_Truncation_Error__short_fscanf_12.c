void FUN0()
{
    short data;
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        fscanf (stdin, "%hd", &data);
    }
    else
    {
        data = CHAR_MAX-5;
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
