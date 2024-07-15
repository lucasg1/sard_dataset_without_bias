int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(char data);
void FUN1()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(char data);
void FUN3()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(char data);
void FUN5()
{
    char data;
    data = ' ';
    data = 2;
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0(char data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if(data > 0) 
        {
            if (data < (CHAR_MAX/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
void FUN2(char data)
{
    if(VAR1)
    {
        if(data > 0) 
        {
            if (data < (CHAR_MAX/2))
            {
                char result = data * 2;
                printHexCharLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
void FUN4(char data)
{
    if(VAR2)
    {
        if(data > 0) 
        {
            char result = data * 2;
            printHexCharLine(result);
        }
    }
}
