static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * VAR0 = NULL;
            VAR0 = (char *)malloc(sizeof(*VAR0));
            if (VAR0 == NULL) {exit(-1);}
            *VAR0 = 'G';
            printHexCharLine(*VAR0);
            free(VAR0);
        }
    }
}
void FUN1()
{
    if(staticTrue)
    {
        {
            char * VAR0 = NULL;
            VAR0 = (char *)malloc(sizeof(*VAR0));
            if (VAR0 == NULL) {exit(-1);}
            *VAR0 = 'G';
            printHexCharLine(*VAR0);
            free(VAR0);
        }
    }
}
