void FUN0(int dataArray[]);
void FUN1()
{
    int data;
    int dataArray[5];
    data = -1;
    fscanf(stdin, "%d", &data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int dataArray[])
{
    int data = dataArray[2];
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
