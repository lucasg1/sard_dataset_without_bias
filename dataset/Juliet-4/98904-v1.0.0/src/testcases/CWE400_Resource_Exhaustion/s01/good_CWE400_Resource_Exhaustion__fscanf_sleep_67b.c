typedef struct _CWE400_Resource_Exhaustion__fscanf_sleep_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__fscanf_sleep_67_structType;
void FUN0(CWE400_Resource_Exhaustion__fscanf_sleep_67_structType myStruct);
void FUN1()
{
    int count;
    CWE400_Resource_Exhaustion__fscanf_sleep_67_structType myStruct;
    count = -1;
    count = 20;
    myStruct.structFirst = count;
    FUN0(myStruct);
}
void FUN2(CWE400_Resource_Exhaustion__fscanf_sleep_67_structType myStruct);
void FUN3()
{
    int count;
    CWE400_Resource_Exhaustion__fscanf_sleep_67_structType myStruct;
    count = -1;
    fscanf(stdin, "%d", &count);
    myStruct.structFirst = count;
    FUN2(myStruct);
}
typedef struct _CWE400_Resource_Exhaustion__fscanf_sleep_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__fscanf_sleep_67_structType;
void FUN0(CWE400_Resource_Exhaustion__fscanf_sleep_67_structType myStruct)
{
    int count = myStruct.structFirst;
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN2(CWE400_Resource_Exhaustion__fscanf_sleep_67_structType myStruct)
{
    int count = myStruct.structFirst;
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}
