static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(char * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(char * data)
{
    if(VAR1)
    {
        if (data != NULL)
        {
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(char * data)
{
    if(VAR2)
    {
        printHexCharLine(data[0]);
    }
}
void FUN5()
{
    char * data;
    data = "Good";
    VAR2 = 1; 
    FUN4(data);
}
