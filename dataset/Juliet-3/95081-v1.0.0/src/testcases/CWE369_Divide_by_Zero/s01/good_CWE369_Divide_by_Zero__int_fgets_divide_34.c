typedef union
{
    int unionFirst;
    int unionSecond;
} CWE369_Divide_by_Zero__int_fgets_divide_34_unionType;
void FUN0()
{
    int data;
    CWE369_Divide_by_Zero__int_fgets_divide_34_unionType myUnion;
    data = -1;
    data = 7;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        printIntLine(100 / data);
    }
}
void FUN1()
{
    int data;
    CWE369_Divide_by_Zero__int_fgets_divide_34_unionType myUnion;
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
        if( data != 0 )
        {
            printIntLine(100 / data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
