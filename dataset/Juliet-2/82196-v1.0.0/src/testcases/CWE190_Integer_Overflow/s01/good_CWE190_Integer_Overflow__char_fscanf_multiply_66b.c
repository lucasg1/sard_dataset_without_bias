void FUN0(char dataArray[]);
void FUN1()
{
    char data;
    char dataArray[5];
    data = ' ';
    data = 2;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(char dataArray[]);
void FUN3()
{
    char data;
    char dataArray[5];
    data = ' ';
    fscanf (stdin, "%c", &data);
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(char dataArray[])
{
    char data = dataArray[2];
    if(data > 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN2(char dataArray[])
{
    char data = dataArray[2];
    if(data > 0) 
    {
        if (data < (CHAR_MAX/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
