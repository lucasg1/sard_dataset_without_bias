void FUN0(int countArray[]);
void FUN1()
{
    int count;
    int countArray[5];
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
    countArray[2] = count;
    FUN0(countArray);
}
void FUN0(int countArray[])
{
    int count = countArray[2];
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
