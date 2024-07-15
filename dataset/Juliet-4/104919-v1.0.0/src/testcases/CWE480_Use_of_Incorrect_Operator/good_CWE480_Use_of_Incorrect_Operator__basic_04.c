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
static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN2()
{
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        if(FUN1() == NULL) 
        {
            printLine("Got a NULL");
        }
    }
}
