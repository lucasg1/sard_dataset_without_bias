typedef union
{
    int unionFirst;
    int unionSecond;
} CWE617_Reachable_Assertion__fgets_34_unionType;
void FUN0()
{
    int data;
    CWE617_Reachable_Assertion__fgets_34_unionType myUnion;
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
<START>
        assert(data > ASSERT_VALUE);
<END>
    }
}
