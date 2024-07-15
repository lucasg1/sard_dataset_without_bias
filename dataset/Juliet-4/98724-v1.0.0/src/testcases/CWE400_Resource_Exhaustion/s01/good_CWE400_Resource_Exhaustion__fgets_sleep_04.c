static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int count;
    count = -1;
    if(STATIC_CONST_TRUE)
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE] = "";
            if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
            {
                count = atoi(inputBuffer);
            }
            else
            {
                printLine("fgets() failed.");
            }
        }
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (count > 0 && count <= 2000)
        {
            SLEEP(count);
            printLine("Sleep time OK");
        }
        else
        {
            printLine("Sleep time too long");
        }
    }
}
void FUN1()
{
    int count;
    count = -1;
    if(STATIC_CONST_TRUE)
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE] = "";
            if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
            {
                count = atoi(inputBuffer);
            }
            else
            {
                printLine("fgets() failed.");
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        if (count > 0 && count <= 2000)
        {
            SLEEP(count);
            printLine("Sleep time OK");
        }
        else
        {
            printLine("Sleep time too long");
        }
    }
}
void FUN2()
{
    int count;
    count = -1;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        count = 20;
    }
    if(STATIC_CONST_TRUE)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
void FUN3()
{
    int count;
    count = -1;
    if(STATIC_CONST_TRUE)
    {
        count = 20;
    }
    if(STATIC_CONST_TRUE)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
