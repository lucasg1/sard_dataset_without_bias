void FUN0()
{
    int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data > INT_MIN)
        {
            data--;
            int result = data;
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
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        if (data > INT_MIN)
        {
            data--;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN2()
{
    int data;
    data = 0;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = -2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
            data--;
            int result = data;
            printIntLine(result);
        }
    }
}
