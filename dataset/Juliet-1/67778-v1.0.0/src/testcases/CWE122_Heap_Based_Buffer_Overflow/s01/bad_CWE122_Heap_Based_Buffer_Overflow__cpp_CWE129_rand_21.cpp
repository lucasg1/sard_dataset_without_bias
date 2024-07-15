namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(int data)
{
    if(VAR1)
    {
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
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    VAR1 = 1; 
    FUN0(data);
}
} 
