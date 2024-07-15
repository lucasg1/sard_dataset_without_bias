static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int data)
{
    if(VAR1)
    {
        {
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}
void FUN3()
{
    int data;
    data = -1;
    data = RAND32();
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int data)
{
    if(VAR2)
    {
        {
            int buffer[10] = { 0 };
            if (data < 10)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is too big.");
            }
        }
    }
}
void FUN5()
{
    int data;
    data = -1;
    data = 7;
    VAR2 = 1; 
    FUN4(data);
}
