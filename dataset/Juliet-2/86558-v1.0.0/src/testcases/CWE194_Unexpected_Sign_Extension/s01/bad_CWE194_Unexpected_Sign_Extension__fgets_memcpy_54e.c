void FUN0(short data);
void FUN1()
{
    short data;
    data = 0;
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
    FUN0(data);
}
void FUN2(short data);
void FUN3(short data)
{
    FUN2(data);
}
void FUN3(short data);
void FUN0(short data)
{
    FUN3(data);
}
void FUN6(short data);
void FUN2(short data)
{
    FUN6(data);
}
void FUN6(short data)
{
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
