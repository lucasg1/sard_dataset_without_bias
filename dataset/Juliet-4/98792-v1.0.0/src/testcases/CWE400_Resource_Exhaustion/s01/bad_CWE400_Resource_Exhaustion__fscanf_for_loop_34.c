typedef union
{
    int unionFirst;
    int unionSecond;
} CWE400_Resource_Exhaustion__fscanf_for_loop_34_unionType;
void FUN0()
{
    int count;
    CWE400_Resource_Exhaustion__fscanf_for_loop_34_unionType myUnion;
    count = -1;
    fscanf(stdin, "%d", &count);
    myUnion.unionFirst = count;
    {
        int count = myUnion.unionSecond;
        {
            size_t i = 0;
<START>
            for (i = 0; i < (size_t)count; i++)
<END>
            {
                printLine("Hello");
            }
        }
    }
}
