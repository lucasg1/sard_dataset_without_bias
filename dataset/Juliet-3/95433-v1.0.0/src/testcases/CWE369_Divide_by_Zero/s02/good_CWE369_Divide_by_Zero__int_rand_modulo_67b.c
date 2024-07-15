typedef struct _CWE369_Divide_by_Zero__int_rand_modulo_67_structType
{
    int structFirst;
} CWE369_Divide_by_Zero__int_rand_modulo_67_structType;
void FUN0(CWE369_Divide_by_Zero__int_rand_modulo_67_structType myStruct);
void FUN1()
{
    int data;
    CWE369_Divide_by_Zero__int_rand_modulo_67_structType myStruct;
    data = -1;
    data = 7;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE369_Divide_by_Zero__int_rand_modulo_67_structType myStruct);
void FUN3()
{
    int data;
    CWE369_Divide_by_Zero__int_rand_modulo_67_structType myStruct;
    data = -1;
    data = RAND32();
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE369_Divide_by_Zero__int_rand_modulo_67_structType
{
    int structFirst;
} CWE369_Divide_by_Zero__int_rand_modulo_67_structType;
void FUN0(CWE369_Divide_by_Zero__int_rand_modulo_67_structType myStruct)
{
    int data = myStruct.structFirst;
    printIntLine(100 % data);
}
void FUN2(CWE369_Divide_by_Zero__int_rand_modulo_67_structType myStruct)
{
    int data = myStruct.structFirst;
    if( data != 0 )
    {
        printIntLine(100 % data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
