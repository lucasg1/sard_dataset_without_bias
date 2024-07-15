typedef struct _CWE369_Divide_by_Zero__float_rand_67_structType
{
    float structFirst;
} CWE369_Divide_by_Zero__float_rand_67_structType;
void FUN0(CWE369_Divide_by_Zero__float_rand_67_structType myStruct);
void FUN1()
{
    float data;
    CWE369_Divide_by_Zero__float_rand_67_structType myStruct;
    data = 0.0F;
    data = 2.0F;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE369_Divide_by_Zero__float_rand_67_structType myStruct);
void FUN3()
{
    float data;
    CWE369_Divide_by_Zero__float_rand_67_structType myStruct;
    data = 0.0F;
    data = (float)RAND32();
    myStruct.structFirst = data;
    FUN2(myStruct);
}
typedef struct _CWE369_Divide_by_Zero__float_rand_67_structType
{
    float structFirst;
} CWE369_Divide_by_Zero__float_rand_67_structType;
void FUN0(CWE369_Divide_by_Zero__float_rand_67_structType myStruct)
{
    float data = myStruct.structFirst;
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
void FUN2(CWE369_Divide_by_Zero__float_rand_67_structType myStruct)
{
    float data = myStruct.structFirst;
    if(fabs(data) > 0.000001)
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
