void FUN0()
{
    int data;
    data = 0;
    while(1)
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
        break;
    }
    while(1)
    {
        if (data < INT_MAX)
        {
            ++data;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
        break;
    }
}
void FUN1()
{
    int data;
    data = 0;
    while(1)
    {
        data = 2;
        break;
    }
    while(1)
    {
        {
            ++data;
            int result = data;
            printIntLine(result);
        }
        break;
    }
}
