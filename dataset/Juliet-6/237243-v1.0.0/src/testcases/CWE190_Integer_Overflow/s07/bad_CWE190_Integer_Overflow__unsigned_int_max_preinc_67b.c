typedef struct _CWE190_Integer_Overflow__unsigned_int_max_preinc_67_structType
{
    unsigned int structFirst;
} CWE190_Integer_Overflow__unsigned_int_max_preinc_67_structType;
void FUN0(CWE190_Integer_Overflow__unsigned_int_max_preinc_67_structType myStruct);
void FUN1()
{
    unsigned int data;
    CWE190_Integer_Overflow__unsigned_int_max_preinc_67_structType myStruct;
    data = 0;
    data = UINT_MAX;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE190_Integer_Overflow__unsigned_int_max_preinc_67_structType
{
    unsigned int structFirst;
} CWE190_Integer_Overflow__unsigned_int_max_preinc_67_structType;
void FUN0(CWE190_Integer_Overflow__unsigned_int_max_preinc_67_structType myStruct)
{
    unsigned int data = myStruct.structFirst;
    {
<START>
        ++data;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
