typedef struct _CWE400_Resource_Exhaustion__rand_sleep_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__rand_sleep_67_structType;
void FUN0(CWE400_Resource_Exhaustion__rand_sleep_67_structType myStruct);
void FUN1()
{
    int count;
    CWE400_Resource_Exhaustion__rand_sleep_67_structType myStruct;
    count = -1;
    count = RAND32();
    myStruct.structFirst = count;
    FUN0(myStruct);
}
typedef struct _CWE400_Resource_Exhaustion__rand_sleep_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__rand_sleep_67_structType;
void FUN0(CWE400_Resource_Exhaustion__rand_sleep_67_structType myStruct)
{
    int count = myStruct.structFirst;
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
