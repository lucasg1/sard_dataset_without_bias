void FUN0()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    {
        int dataCopy = data;
        int data = dataCopy;
        {
            int i;
            int buffer[10] = { 0 };
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
        }
    }
}
