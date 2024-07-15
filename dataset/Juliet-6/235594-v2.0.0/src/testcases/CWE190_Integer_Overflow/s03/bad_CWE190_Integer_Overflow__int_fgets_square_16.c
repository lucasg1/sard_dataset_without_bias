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
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
        break;
    }
}
