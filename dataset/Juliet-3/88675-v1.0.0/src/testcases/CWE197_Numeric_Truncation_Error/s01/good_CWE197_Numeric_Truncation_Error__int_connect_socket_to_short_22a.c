extern int VAR0;
extern int VAR1;
int FUN0(int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = CHAR_MAX-5;
    }
    return data;
}
int FUN1(int data)
{
    if(VAR1)
    {
        data = CHAR_MAX-5;
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
int FUN0(int data);
void FUN3()
{
    int data;
    data = -1;
    VAR0 = 0; 
    data = FUN0(data);
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
int FUN1(int data);
void FUN5()
{
    int data;
    data = -1;
    VAR1 = 1; 
    data = FUN1(data);
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
