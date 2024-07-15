typedef struct _CWE190_Integer_Overflow__int_rand_postinc_67_structType
{
    int structFirst;
} CWE190_Integer_Overflow__int_rand_postinc_67_structType;
void FUN0(CWE190_Integer_Overflow__int_rand_postinc_67_structType myStruct);
void FUN1()
{
    int data;
    CWE190_Integer_Overflow__int_rand_postinc_67_structType myStruct;
    data = 0;
    data = RAND32();
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE190_Integer_Overflow__int_rand_postinc_67_structType
{
    int structFirst;
} CWE190_Integer_Overflow__int_rand_postinc_67_structType;
void FUN0(CWE190_Integer_Overflow__int_rand_postinc_67_structType myStruct)
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
