short FUN0(short data)
{
    fscanf (stdin, "%hd", &data);
    return data;
}
short FUN0(short data);
void FUN2()
{
    short data;
    data = -1;
    data = FUN0(data);
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
