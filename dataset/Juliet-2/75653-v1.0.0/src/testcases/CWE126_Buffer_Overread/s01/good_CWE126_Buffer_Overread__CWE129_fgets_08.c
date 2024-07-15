static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    int data;
    data = -1;
    if(FUN0())
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
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}
void FUN3()
{
    int data;
    data = -1;
    if(FUN0())
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
    if(FUN0())
    {
        {
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}
void FUN4()
{
    int data;
    data = -1;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 7;
    }
    if(FUN0())
    {
        {
            int buffer[10] = { 0 };
            if (data >= 0)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
}
void FUN5()
{
    int data;
    data = -1;
    if(FUN0())
    {
        data = 7;
    }
    if(FUN0())
    {
        {
            int buffer[10] = { 0 };
            if (data >= 0)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
}
