void FUN0(short dataArray[]);
void FUN1()
{
    short data;
    short dataArray[5];
    data = -1;
    fscanf (stdin, "%hd", &data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(short dataArray[])
{
    short data = dataArray[2];
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
