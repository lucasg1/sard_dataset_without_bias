void FUN0(int data);
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = -1;
    data = 10;
    funcPtr(data);
}
void FUN0(int data)
{
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
