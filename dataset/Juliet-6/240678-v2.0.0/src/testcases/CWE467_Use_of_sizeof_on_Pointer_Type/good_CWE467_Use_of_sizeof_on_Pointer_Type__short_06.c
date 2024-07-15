static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            short * VAR0 = NULL;
            VAR0 = (short *)malloc(sizeof(*VAR0));
            if (VAR0 == NULL) {exit(-1);}
            *VAR0 = 6;
            printShortLine(*VAR0);
            free(VAR0);
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            short * VAR0 = NULL;
            VAR0 = (short *)malloc(sizeof(*VAR0));
            if (VAR0 == NULL) {exit(-1);}
            *VAR0 = 6;
            printShortLine(*VAR0);
            free(VAR0);
        }
    }
}
