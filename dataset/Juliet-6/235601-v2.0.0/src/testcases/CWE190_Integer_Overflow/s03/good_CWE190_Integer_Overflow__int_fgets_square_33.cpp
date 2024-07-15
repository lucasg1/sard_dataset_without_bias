namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = 0;
    data = 2;
    {
        int data = dataRef;
        {
            int result = data * data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    int &dataRef = data;
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
    {
        int data = dataRef;
        if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
        {
            int result = data * data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
