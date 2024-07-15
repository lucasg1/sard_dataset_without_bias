typedef struct _CWE617_Reachable_Assertion__fgets_67_structType
{
    int structFirst;
} CWE617_Reachable_Assertion__fgets_67_structType;
void FUN0(CWE617_Reachable_Assertion__fgets_67_structType myStruct);
void FUN1()
{
    int data;
    CWE617_Reachable_Assertion__fgets_67_structType myStruct;
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
typedef struct _CWE617_Reachable_Assertion__fgets_67_structType
{
    int structFirst;
} CWE617_Reachable_Assertion__fgets_67_structType;
void FUN0(CWE617_Reachable_Assertion__fgets_67_structType myStruct)
{
    int data = myStruct.structFirst;
<START>
    assert(data > ASSERT_VALUE);
<END>
}
