void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
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
    FUN0(data);
}
void FUN2(int data);
void FUN0(int data)
{
    FUN2(data);
}
void FUN2(int data)
{
    {
<START>
        data++;
<END>
        int result = data;
        printIntLine(result);
    }
}
