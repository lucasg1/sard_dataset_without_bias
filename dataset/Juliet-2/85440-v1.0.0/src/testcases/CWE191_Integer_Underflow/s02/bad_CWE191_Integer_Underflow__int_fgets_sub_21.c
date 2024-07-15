static int VAR0 = 0;
void FUN0(int data)
{
    if(VAR0)
    {
        {
<START>
            int result = data - 1;
<END>
            printIntLine(result);
        }
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
    VAR0 = 1; 
    FUN0(data);
}
