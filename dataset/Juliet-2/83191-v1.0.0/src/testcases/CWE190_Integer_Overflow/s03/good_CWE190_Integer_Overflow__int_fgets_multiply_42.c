static int FUN0(int data)
{
    data = 2;
    return data;
}
void FUN1()
{
    int data;
    data = 0;
    data = FUN0(data);
    if(data > 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
static int FUN2(int data)
{
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
    return data;
}
void FUN3()
{
    int data;
    data = 0;
    data = FUN2(data);
    if(data > 0) 
    {
        if (data < (INT_MAX/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
