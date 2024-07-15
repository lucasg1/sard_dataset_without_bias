void FUN0()
{
    int data;
    data = 0;
    if(globalReturnsTrueOrFalse())
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
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
<START>
            data++;
<END>
            int result = data;
            printIntLine(result);
        }
    }
    else
    {
        if (data < INT_MAX)
        {
            data++;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
