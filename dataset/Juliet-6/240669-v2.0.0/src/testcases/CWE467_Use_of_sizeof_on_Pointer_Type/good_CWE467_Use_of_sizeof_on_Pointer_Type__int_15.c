void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int * VAR0 = NULL;
        VAR0 = (int *)malloc(sizeof(*VAR0));
        if (VAR0 == NULL) {exit(-1);}
        *VAR0 = 6;
        printIntLine(*VAR0);
        free(VAR0);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        int * VAR0 = NULL;
        VAR0 = (int *)malloc(sizeof(*VAR0));
        if (VAR0 == NULL) {exit(-1);}
        *VAR0 = 6;
        printIntLine(*VAR0);
        free(VAR0);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
