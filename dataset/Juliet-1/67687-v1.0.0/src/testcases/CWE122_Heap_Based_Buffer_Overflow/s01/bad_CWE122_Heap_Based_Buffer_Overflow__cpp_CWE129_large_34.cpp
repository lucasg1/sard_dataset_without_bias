namespace NAMESPACE0
{
typedef union
{
    int unionFirst;
    int unionSecond;
} unionType;
void FUN0()
{
    int data;
    unionType myUnion;
    data = -1;
    data = 10;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int i;
            int * buffer = new int[10];
            for (i = 0; i < 10; i++)
            {
                buffer[i] = 0;
            }
            if (data >= 0)
            {
<START>
                buffer[data] = 1;
<END>
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is negative.");
            }
            delete[] buffer;
        }
    }
}
} 
