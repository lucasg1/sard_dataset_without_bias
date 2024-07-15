static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(unsigned int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data < UINT_MAX)
        {
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(unsigned int data)
{
    if(VAR1)
    {
        if (data < UINT_MAX)
        {
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN3()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(unsigned int data)
{
    if(VAR2)
    {
        {
            unsigned int result = data + 1;
            printUnsignedLine(result);
        }
    }
}
void FUN5()
{
    unsigned int data;
    data = 0;
    data = 2;
    VAR2 = 1; 
    FUN4(data);
}
