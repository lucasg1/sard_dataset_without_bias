static short FUN0(short data)
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
void FUN1()
{
    short data;
    data = 0;
    data = FUN0(data);
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
<START>
            memcpy(dest, source, data);
<END>
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
