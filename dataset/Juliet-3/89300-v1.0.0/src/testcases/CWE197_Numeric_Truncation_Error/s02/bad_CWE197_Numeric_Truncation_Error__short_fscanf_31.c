void FUN0()
{
    short data;
    data = -1;
    fscanf (stdin, "%hd", &data);
    {
        short dataCopy = data;
        short data = dataCopy;
        {
<START>
            char charData = (char)data;
<END>
            printHexCharLine(charData);
        }
    }
}
