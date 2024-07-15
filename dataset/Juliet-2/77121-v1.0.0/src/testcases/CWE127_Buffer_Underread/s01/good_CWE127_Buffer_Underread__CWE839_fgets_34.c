typedef union
{
    int unionFirst;
    int unionSecond;
} CWE127_Buffer_Underread__CWE839_fgets_34_unionType;
void FUN0()
{
    int data;
    CWE127_Buffer_Underread__CWE839_fgets_34_unionType myUnion;
    data = -1;
    data = 7;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int buffer[10] = { 0 };
            if (data < 10)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is too big.");
            }
        }
    }
}
void FUN1()
{
    int data;
    CWE127_Buffer_Underread__CWE839_fgets_34_unionType myUnion;
    data = -1;
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
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}
