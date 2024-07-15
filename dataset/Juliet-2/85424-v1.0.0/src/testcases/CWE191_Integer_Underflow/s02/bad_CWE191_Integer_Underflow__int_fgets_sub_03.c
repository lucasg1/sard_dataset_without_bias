void FUN0()
{
    int data;
    data = 0;
    if(5==5)
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
    if(5==5)
    {
        {
<START>
            int result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
