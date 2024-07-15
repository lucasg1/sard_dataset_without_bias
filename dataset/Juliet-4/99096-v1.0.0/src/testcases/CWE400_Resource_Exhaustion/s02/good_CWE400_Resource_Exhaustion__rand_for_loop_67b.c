typedef struct _CWE400_Resource_Exhaustion__rand_for_loop_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__rand_for_loop_67_structType;
void FUN0(CWE400_Resource_Exhaustion__rand_for_loop_67_structType myStruct);
void FUN1()
{
    int count;
    CWE400_Resource_Exhaustion__rand_for_loop_67_structType myStruct;
    count = -1;
    count = 20;
    myStruct.structFirst = count;
    FUN0(myStruct);
}
void FUN2(CWE400_Resource_Exhaustion__rand_for_loop_67_structType myStruct);
void FUN3()
{
    int count;
    CWE400_Resource_Exhaustion__rand_for_loop_67_structType myStruct;
    count = -1;
    count = RAND32();
    myStruct.structFirst = count;
    FUN2(myStruct);
}
typedef struct _CWE400_Resource_Exhaustion__rand_for_loop_67_structType
{
    int structFirst;
} CWE400_Resource_Exhaustion__rand_for_loop_67_structType;
void FUN0(CWE400_Resource_Exhaustion__rand_for_loop_67_structType myStruct)
{
    int count = myStruct.structFirst;
    {
        size_t i = 0;
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}
void FUN2(CWE400_Resource_Exhaustion__rand_for_loop_67_structType myStruct)
{
    int count = myStruct.structFirst;
    {
        size_t i = 0;
        if (count > 0 && count <= 20)
        {
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}
