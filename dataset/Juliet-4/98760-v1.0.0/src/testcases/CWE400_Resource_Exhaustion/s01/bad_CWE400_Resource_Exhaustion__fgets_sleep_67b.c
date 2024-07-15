typedef struct _CWE400_Resource_Exhaustion__fgets_sleep_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__fgets_sleep_67_structType;
void FUN0(CWE400_Resource_Exhaustion__fgets_sleep_67_structType myStruct);
void FUN1()
{
    int count;
    CWE400_Resource_Exhaustion__fgets_sleep_67_structType myStruct;
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
typedef struct _CWE400_Resource_Exhaustion__fgets_sleep_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__fgets_sleep_67_structType;
void FUN0(CWE400_Resource_Exhaustion__fgets_sleep_67_structType myStruct)
{
    int count = myStruct.structFirst;
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
