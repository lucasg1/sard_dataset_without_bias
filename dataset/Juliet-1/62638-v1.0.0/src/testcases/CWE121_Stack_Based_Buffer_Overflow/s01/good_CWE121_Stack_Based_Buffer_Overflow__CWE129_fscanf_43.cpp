namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = 7;
}
void FUN1()
{
    int data;
    data = -1;
    FUN0(data);
    {
        int i;
        int buffer[10] = { 0 };
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
    }
}
void FUN2(int &data)
{
    fscanf(stdin, "%d", &data);
}
void FUN3()
{
    int data;
    data = -1;
    FUN2(data);
    {
        int i;
        int buffer[10] = { 0 };
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
    }
}
} 
