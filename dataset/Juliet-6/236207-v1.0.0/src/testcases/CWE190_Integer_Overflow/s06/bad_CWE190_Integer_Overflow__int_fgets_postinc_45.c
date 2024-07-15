static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR0;
    {
<START>
        data++;
<END>
        int result = data;
        printIntLine(result);
    }
}
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
    VAR0 = data;
    FUN0();
}
