void FUN0()
{
    int count;
    count = -1;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        {
            size_t i = 0;
<START>
            for (i = 0; i < (size_t)count; i++)
<END>
            {
                printLine("Hello");
            }
        }
    }
}
