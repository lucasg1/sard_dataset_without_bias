void FUN0()
{
    short data;
    data = -1;
    goto source;
source:
    fscanf (stdin, "%hd", &data);
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
