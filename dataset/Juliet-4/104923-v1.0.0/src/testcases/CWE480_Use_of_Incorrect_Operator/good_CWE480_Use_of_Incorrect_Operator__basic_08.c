static char* VAR0 = "Hello";
static char* VAR1 = "Hello";
static char * FUN0()
{
    if(rand()%2 == 0)
    {
        return NULL;
    }
    else
    {
        return VAR0;
    }
}
static char * FUN1()
{
    if(rand()%2 == 0)
    {
        return NULL;
    }
    else
    {
        return VAR1;
    }
}
static int FUN2()
{
    return 1;
}
static int FUN3()
{
    return 0;
}
void FUN4()
{
    if(FUN3())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if(FUN1() == NULL) 
        {
            printLine("Got a NULL");
        }
    }
}
void FUN5()
{
    if(FUN2())
    {
        if(FUN1() == NULL) 
        {
            printLine("Got a NULL");
        }
    }
}
