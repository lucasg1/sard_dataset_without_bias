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
        if (data < INT_MAX)
        {
            int result = data + 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(int data)
{
    if(VAR1)
    {
        if (data < INT_MAX)
        {
            int result = data + 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(int data)
{
    if(VAR2)
    {
        {
            int result = data + 1;
            printIntLine(result);
        }
    }
}
void FUN5()
{
    int data;
    data = 0;
    data = 2;
    VAR2 = 1; 
    FUN4(data);
}
