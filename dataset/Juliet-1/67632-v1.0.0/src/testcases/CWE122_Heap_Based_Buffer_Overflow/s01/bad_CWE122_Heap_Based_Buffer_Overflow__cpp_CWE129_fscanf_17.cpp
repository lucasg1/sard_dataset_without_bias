namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    int data;
    data = -1;
    for(i = 0; i < 1; i++)
    {
        fscanf(stdin, "%d", &data);
    }
    for(j = 0; j < 1; j++)
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
} 
