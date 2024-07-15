typedef union
{
    int unionFirst;
    int unionSecond;
} CWE369_Divide_by_Zero__int_fgets_modulo_34_unionType;
void FUN0()
{
    int data;
    CWE369_Divide_by_Zero__int_fgets_modulo_34_unionType myUnion;
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
        printIntLine(100 % data);
<END>
    }
}
