typedef struct _CWE190_Integer_Overflow__int_rand_preinc_67_structType
{
    int structFirst;
} CWE190_Integer_Overflow__int_rand_preinc_67_structType;
void FUN0(CWE190_Integer_Overflow__int_rand_preinc_67_structType myStruct);
void FUN1()
{
    int data;
    CWE190_Integer_Overflow__int_rand_preinc_67_structType myStruct;
    data = 0;
    data = 2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE190_Integer_Overflow__int_rand_preinc_67_structType myStruct);
void FUN3()
{
    int data;
    CWE190_Integer_Overflow__int_rand_preinc_67_structType myStruct;
    data = 0;
    data = RAND32();
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE190_Integer_Overflow__int_rand_preinc_67_structType
{
    int structFirst;
} CWE190_Integer_Overflow__int_rand_preinc_67_structType;
void FUN0(CWE190_Integer_Overflow__int_rand_preinc_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        ++data;
        int result = data;
        printIntLine(result);
    }
}
void FUN2(CWE190_Integer_Overflow__int_rand_preinc_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if (data < INT_MAX)
    {
        ++data;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
