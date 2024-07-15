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
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
}
