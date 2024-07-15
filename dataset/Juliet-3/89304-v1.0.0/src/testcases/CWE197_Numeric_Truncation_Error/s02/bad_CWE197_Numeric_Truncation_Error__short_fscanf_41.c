void FUN0(short data)
{
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
void FUN1()
{
    short data;
    data = -1;
<START>
    fscanf (stdin, "%hd", &data);
<END>
    FUN0(data);
}
