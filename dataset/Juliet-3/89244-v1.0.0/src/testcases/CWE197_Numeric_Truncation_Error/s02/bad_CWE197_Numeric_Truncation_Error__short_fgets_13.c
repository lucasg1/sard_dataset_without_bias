void FUN0()
{
    short data;
    data = -1;
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            char inputBuffer[CHAR_ARRAY_SIZE] = "";
            if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
            {
                data = (short)atoi(inputBuffer);
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
