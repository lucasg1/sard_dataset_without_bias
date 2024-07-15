typedef struct _CWE369_Divide_by_Zero__int_fgets_modulo_67_structType
{
    int structFirst;
} CWE369_Divide_by_Zero__int_fgets_modulo_67_structType;
void FUN0(CWE369_Divide_by_Zero__int_fgets_modulo_67_structType myStruct);
void FUN1()
{
    int data;
    CWE369_Divide_by_Zero__int_fgets_modulo_67_structType myStruct;
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
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE369_Divide_by_Zero__int_fgets_modulo_67_structType
{
    int structFirst;
} CWE369_Divide_by_Zero__int_fgets_modulo_67_structType;
void FUN0(CWE369_Divide_by_Zero__int_fgets_modulo_67_structType myStruct)
{
    int data = myStruct.structFirst;
<START>
    printIntLine(100 % data);
<END>
}
