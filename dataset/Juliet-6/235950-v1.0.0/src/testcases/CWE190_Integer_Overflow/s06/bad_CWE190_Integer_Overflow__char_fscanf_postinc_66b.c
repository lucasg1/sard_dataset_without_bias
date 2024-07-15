void FUN0(char dataArray[]);
void FUN1()
{
    char data;
    char dataArray[5];
    data = ' ';
    fscanf (stdin, "%c", &data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(char dataArray[])
{
    char data = dataArray[2];
    {
<START>
        data++;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
