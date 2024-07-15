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
    count = 20;
    myUnion.unionFirst = count;
    {
        int count = myUnion.unionSecond;
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
void FUN1()
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
        if (count > 0 && count <= 2000)
        {
            SLEEP(count);
            printLine("Sleep time OK");
        }
        else
        {
            printLine("Sleep time too long");
        }
    }
}
