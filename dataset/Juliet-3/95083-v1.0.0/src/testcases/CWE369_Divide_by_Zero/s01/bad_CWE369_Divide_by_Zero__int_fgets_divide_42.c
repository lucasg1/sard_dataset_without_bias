static int FUN0(int data)
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
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    data = FUN0(data);
<START>
    printIntLine(100 / data);
<END>
}
