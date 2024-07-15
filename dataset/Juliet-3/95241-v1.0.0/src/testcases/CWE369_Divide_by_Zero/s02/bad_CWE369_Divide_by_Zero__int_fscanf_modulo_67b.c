typedef struct _CWE369_Divide_by_Zero__int_fscanf_modulo_67_structType
{
    int structFirst;
} CWE369_Divide_by_Zero__int_fscanf_modulo_67_structType;
void FUN0(CWE369_Divide_by_Zero__int_fscanf_modulo_67_structType myStruct);
void FUN1()
{
    int data;
    CWE369_Divide_by_Zero__int_fscanf_modulo_67_structType myStruct;
    data = -1;
    fscanf(stdin, "%d", &data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE369_Divide_by_Zero__int_fscanf_modulo_67_structType
{
    int structFirst;
} CWE369_Divide_by_Zero__int_fscanf_modulo_67_structType;
void FUN0(CWE369_Divide_by_Zero__int_fscanf_modulo_67_structType myStruct)
{
    int data = myStruct.structFirst;
<START>
    printIntLine(100 % data);
<END>
}
