typedef union
{
    int unionFirst;
    int unionSecond;
} CWE400_Resource_Exhaustion__fgets_sleep_34_unionType;
void FUN0()
{
    int count;
    CWE400_Resource_Exhaustion__fgets_sleep_34_unionType myUnion;
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
    myUnion.unionFirst = count;
    {
        int count = myUnion.unionSecond;
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
