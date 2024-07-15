void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int * VAR0 = NULL;
            VAR0 = (int *)malloc(sizeof(*VAR0));
            if (VAR0 == NULL) {exit(-1);}
            *VAR0 = 6;
            printIntLine(*VAR0);
            free(VAR0);
        }
    }
}
void FUN1()
{
    if(1)
    {
        {
            int * VAR0 = NULL;
            VAR0 = (int *)malloc(sizeof(*VAR0));
            if (VAR0 == NULL) {exit(-1);}
            *VAR0 = 6;
            printIntLine(*VAR0);
            free(VAR0);
        }
    }
}
