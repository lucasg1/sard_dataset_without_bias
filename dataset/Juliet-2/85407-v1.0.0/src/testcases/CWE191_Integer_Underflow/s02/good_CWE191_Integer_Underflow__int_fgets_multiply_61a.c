int FUN0(int data)
{
    data = -2;
    return data;
}
int FUN1(int data)
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
int FUN0(int data);
void FUN3()
{
    int data;
    data = 0;
    data = FUN0(data);
    if(data < 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
int FUN1(int data);
void FUN5()
{
    int data;
    data = 0;
    data = FUN1(data);
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
