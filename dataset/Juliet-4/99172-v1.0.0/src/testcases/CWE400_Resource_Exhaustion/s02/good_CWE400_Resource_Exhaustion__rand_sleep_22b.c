int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(int count);
void FUN1()
{
    int count;
    count = -1;
    count = RAND32();
    VAR0 = 0; 
    FUN0(count);
}
void FUN2(int count);
void FUN3()
{
    int count;
    count = -1;
    count = RAND32();
    VAR1 = 1; 
    FUN2(count);
}
void FUN4(int count);
void FUN5()
{
    int count;
    count = -1;
    count = 20;
    VAR2 = 1; 
    FUN4(count);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0(int count)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (count > 0 && count <= 2000)
        {
            SLEEP(count);
            printLine("Sleep time OK");
        }
        else
        {
            printLine("Sleep time too long");
        }
    }
}
void FUN2(int count)
{
    if(VAR1)
    {
        if (count > 0 && count <= 2000)
        {
            SLEEP(count);
            printLine("Sleep time OK");
        }
        else
        {
            printLine("Sleep time too long");
        }
    }
}
void FUN4(int count)
{
    if(VAR2)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
