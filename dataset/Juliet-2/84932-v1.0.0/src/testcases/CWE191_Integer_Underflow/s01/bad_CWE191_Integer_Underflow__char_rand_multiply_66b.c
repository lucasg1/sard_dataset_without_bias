void FUN0(char dataArray[]);
void FUN1()
{
    char data;
    char dataArray[5];
    data = ' ';
    data = (char)RAND32();
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(char dataArray[])
{
    char data = dataArray[2];
    if(data < 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
