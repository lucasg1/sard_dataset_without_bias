short FUN0(short data)
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
    return data;
}
short FUN0(short data);
void FUN2()
{
    short data;
    data = -1;
    data = FUN0(data);
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
