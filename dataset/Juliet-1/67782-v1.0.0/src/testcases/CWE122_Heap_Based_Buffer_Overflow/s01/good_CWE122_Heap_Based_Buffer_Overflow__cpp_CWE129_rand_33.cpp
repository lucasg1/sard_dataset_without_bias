namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = 7;
    {
        int data = dataRef;
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
    int &dataRef = data;
    data = -1;
    data = RAND32();
    {
        int data = dataRef;
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
