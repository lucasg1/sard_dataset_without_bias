void FUN0()
{
    int data;
    data = -1;
    if(1)
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
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
