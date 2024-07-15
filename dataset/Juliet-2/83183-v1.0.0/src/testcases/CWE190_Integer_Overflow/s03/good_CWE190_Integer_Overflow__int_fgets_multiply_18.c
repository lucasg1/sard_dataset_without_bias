void FUN0()
{
    int data;
    data = 0;
    goto source;
source:
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
    goto sink;
sink:
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
void FUN1()
{
    int data;
    data = 0;
    goto source;
source:
    data = 2;
    goto sink;
sink:
    if(data > 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
