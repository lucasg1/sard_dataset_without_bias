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
void FUN2()
{
    if(globalReturnsTrue())
    {
<START>
        if(FUN0 == NULL)
<END>
        {
            printLine("Got a NULL");
        }
    }
}
