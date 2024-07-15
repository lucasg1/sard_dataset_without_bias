void FUN0()
{
    short data;
    data = -1;
    if(globalFive==5)
    {
        fscanf (stdin, "%hd", &data);
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
