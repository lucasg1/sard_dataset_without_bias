void FUN0(int data)
{
    if(data > 0) 
    {
<START>
        int result = data * 2;
<END>
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
    FUN0(data);
}