namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = -2;
}
void FUN1()
{
    int data;
    data = 0;
    FUN0(data);
    {
        int result = data - 1;
        printIntLine(result);
    }
}
void FUN2(int &data)
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
}
void FUN3()
{
    int data;
    data = 0;
    FUN2(data);
    if (data > INT_MIN)
    {
        int result = data - 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
} 
