typedef union
{
    float unionFirst;
    float unionSecond;
} CWE369_Divide_by_Zero__float_rand_34_unionType;
void FUN0()
{
    float data;
    CWE369_Divide_by_Zero__float_rand_34_unionType myUnion;
    data = 0.0F;
    data = 2.0F;
    myUnion.unionFirst = data;
    {
        float data = myUnion.unionSecond;
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
void FUN1()
{
    float data;
    CWE369_Divide_by_Zero__float_rand_34_unionType myUnion;
    data = 0.0F;
    data = (float)RAND32();
    myUnion.unionFirst = data;
    {
        float data = myUnion.unionSecond;
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
}
