typedef union
{
    int unionFirst;
    int unionSecond;
} CWE400_Resource_Exhaustion__fscanf_sleep_34_unionType;
void FUN0()
{
    int count;
    CWE400_Resource_Exhaustion__fscanf_sleep_34_unionType myUnion;
    count = -1;
    fscanf(stdin, "%d", &count);
    myUnion.unionFirst = count;
    {
        int count = myUnion.unionSecond;
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
