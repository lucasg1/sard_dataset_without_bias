typedef struct _CWE617_Reachable_Assertion__fscanf_67_structType
{
    int structFirst;
} CWE617_Reachable_Assertion__fscanf_67_structType;
void FUN0(CWE617_Reachable_Assertion__fscanf_67_structType myStruct);
void FUN1()
{
    int data;
    CWE617_Reachable_Assertion__fscanf_67_structType myStruct;
    data = -1;
    fscanf(stdin, "%d", &data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE617_Reachable_Assertion__fscanf_67_structType
{
    int structFirst;
} CWE617_Reachable_Assertion__fscanf_67_structType;
void FUN0(CWE617_Reachable_Assertion__fscanf_67_structType myStruct)
{
    int data = myStruct.structFirst;
<START>
    assert(data > ASSERT_VALUE);
<END>
}
