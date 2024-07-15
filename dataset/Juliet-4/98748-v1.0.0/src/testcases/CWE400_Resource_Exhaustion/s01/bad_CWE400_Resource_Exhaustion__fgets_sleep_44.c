void FUN0(int count)
{
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
void FUN1()
{
    int count;
    void (*funcPtr) (int) = FUN0;
    count = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            count = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    funcPtr(count);
}
