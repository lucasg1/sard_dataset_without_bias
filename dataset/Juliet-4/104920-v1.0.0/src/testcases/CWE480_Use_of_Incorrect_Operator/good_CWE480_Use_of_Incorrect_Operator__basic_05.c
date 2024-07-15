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
static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN2()
{
    if(staticFalse)
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
void FUN3()
{
    if(staticTrue)
    {
        if(FUN1() == NULL) 
        {
            printLine("Got a NULL");
        }
    }
}
