void FUN0(void * countVoidPtr);
void FUN1()
{
    int count;
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
    FUN0(&count);
}
void FUN0(void * countVoidPtr)
{
    int * countPtr = (int *)countVoidPtr;
    int count = (*countPtr);
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
