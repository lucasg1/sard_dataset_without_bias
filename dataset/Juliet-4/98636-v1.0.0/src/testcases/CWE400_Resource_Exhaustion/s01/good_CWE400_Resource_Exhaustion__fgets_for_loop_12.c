void FUN0()
{
    int count;
    count = -1;
    if(globalReturnsTrueOrFalse())
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
    else
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
    if(globalReturnsTrueOrFalse())
    {
        {
            size_t i = 0;
            if (count > 0 && count <= 20)
            {
                for (i = 0; i < (size_t)count; i++)
                {
                    printLine("Hello");
                }
            }
        }
    }
    else
    {
        {
            size_t i = 0;
            if (count > 0 && count <= 20)
            {
                for (i = 0; i < (size_t)count; i++)
                {
                    printLine("Hello");
                }
            }
        }
    }
}
void FUN1()
{
    int count;
    count = -1;
    if(globalReturnsTrueOrFalse())
    {
        count = 20;
    }
    else
    {
        count = 20;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            size_t i = 0;
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
    else
    {
        {
            size_t i = 0;
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}
