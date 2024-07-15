void FUN0(int dataArray[]);
void FUN1()
{
    int data;
    int dataArray[5];
    data = 0;
    data = -2;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(int dataArray[]);
void FUN3()
{
    int data;
    int dataArray[5];
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(int dataArray[])
{
    int data = dataArray[2];
    if(data < 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN2(int dataArray[])
{
    int data = dataArray[2];
    if(data < 0) 
    {
        if (data > (INT_MIN/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
