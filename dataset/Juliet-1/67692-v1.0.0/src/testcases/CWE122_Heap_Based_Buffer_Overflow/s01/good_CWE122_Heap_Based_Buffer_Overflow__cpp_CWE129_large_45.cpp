namespace NAMESPACE0
{
static int VAR1;
static int VAR2;
static int VAR3;
void FUN0()
{
    int data = VAR2;
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
void FUN1()
{
    int data;
    data = -1;
    data = 7;
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    int data = VAR3;
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
void FUN3()
{
    int data;
    data = -1;
    data = 10;
    VAR3 = data;
    FUN2();
}
} 
