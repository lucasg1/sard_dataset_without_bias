typedef struct _CWE400_Resource_Exhaustion__fgets_for_loop_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__fgets_for_loop_67_structType;
void FUN0(CWE400_Resource_Exhaustion__fgets_for_loop_67_structType myStruct);
void FUN1()
{
    int count;
    CWE400_Resource_Exhaustion__fgets_for_loop_67_structType myStruct;
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
    myStruct.structFirst = count;
    FUN0(myStruct);
}
typedef struct _CWE400_Resource_Exhaustion__fgets_for_loop_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__fgets_for_loop_67_structType;
void FUN0(CWE400_Resource_Exhaustion__fgets_for_loop_67_structType myStruct)
{
    int count = myStruct.structFirst;
    {
        size_t i = 0;
<START>
        for (i = 0; i < (size_t)count; i++)
<END>
        {
            printLine("Hello");
        }
    }
}
