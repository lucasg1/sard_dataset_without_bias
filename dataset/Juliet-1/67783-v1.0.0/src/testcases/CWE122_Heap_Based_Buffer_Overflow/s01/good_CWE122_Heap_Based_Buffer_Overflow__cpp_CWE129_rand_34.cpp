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
    data = 7;
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
                buffer[data] = 1;
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
void FUN1()
{
    int data;
    unionType myUnion;
    data = -1;
    data = RAND32();
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
            if (data >= 0 && data < (10))
            {
                buffer[data] = 1;
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
            delete[] buffer;
        }
    }
}
} 
