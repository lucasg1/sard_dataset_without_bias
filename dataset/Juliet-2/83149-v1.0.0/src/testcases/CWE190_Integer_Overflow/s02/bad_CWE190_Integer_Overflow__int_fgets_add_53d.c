void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN3()
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
    FUN2(data);
}
void FUN1(int data);
void FUN2(int data)
{
    FUN1(data);
}
void FUN0(int data)
{
    {
<START>
        int result = data + 1;
<END>
        printIntLine(result);
    }
}
