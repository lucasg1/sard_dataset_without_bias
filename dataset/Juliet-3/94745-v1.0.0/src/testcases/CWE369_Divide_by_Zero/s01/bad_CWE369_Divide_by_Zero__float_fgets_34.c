typedef union
{
    float unionFirst;
    float unionSecond;
} CWE369_Divide_by_Zero__float_fgets_34_unionType;
void FUN0()
{
    float data;
    CWE369_Divide_by_Zero__float_fgets_34_unionType myUnion;
    data = 0.0F;
    {
        char inputBuffer[CHAR_ARRAY_SIZE];
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = (float)atof(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    myUnion.unionFirst = data;
    {
        float data = myUnion.unionSecond;
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
