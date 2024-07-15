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
    data = (float)RAND32();
    myUnion.unionFirst = data;
    {
        float data = myUnion.unionSecond;
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
