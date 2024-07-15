typedef union
{
    int unionFirst;
    int unionSecond;
} CWE190_Integer_Overflow__int_fgets_postinc_34_unionType;
void FUN0()
{
    int data;
    CWE190_Integer_Overflow__int_fgets_postinc_34_unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
<START>
            data++;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
