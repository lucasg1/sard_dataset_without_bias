int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(unsigned int data);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(unsigned int data);
void FUN3()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(unsigned int data);
void FUN5()
{
    unsigned int data;
    data = 0;
    data = 2;
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
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
            data++;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN2(unsigned int data)
{
    if(VAR1)
    {
        if (data < UINT_MAX)
        {
            data++;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN4(unsigned int data)
{
    if(VAR2)
    {
        {
            data++;
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
