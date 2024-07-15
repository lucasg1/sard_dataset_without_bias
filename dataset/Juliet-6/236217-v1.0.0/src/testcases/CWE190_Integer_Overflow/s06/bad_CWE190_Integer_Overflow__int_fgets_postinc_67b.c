typedef struct _CWE190_Integer_Overflow__int_fgets_postinc_67_structType
{
    int structFirst;
} CWE190_Integer_Overflow__int_fgets_postinc_67_structType;
void FUN0(CWE190_Integer_Overflow__int_fgets_postinc_67_structType myStruct);
void FUN1()
{
    int data;
    CWE190_Integer_Overflow__int_fgets_postinc_67_structType myStruct;
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
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE190_Integer_Overflow__int_fgets_postinc_67_structType
{
    int structFirst;
} CWE190_Integer_Overflow__int_fgets_postinc_67_structType;
void FUN0(CWE190_Integer_Overflow__int_fgets_postinc_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
<START>
        data++;
<END>
        int result = data;
        printIntLine(result);
    }
}
