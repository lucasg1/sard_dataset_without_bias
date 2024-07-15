void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            short * VAR0 = NULL;
<START>
            VAR0 = (short *)malloc(sizeof(VAR0));
<END>
            if (VAR0 == NULL) {exit(-1);}
            *VAR0 = 5;
            printShortLine(*VAR0);
            free(VAR0);
        }
    }
    else
    {
        {
            short * VAR1 = NULL;
            VAR1 = (short *)malloc(sizeof(*VAR1));
            if (VAR1 == NULL) {exit(-1);}
            *VAR1 = 6;
            printShortLine(*VAR1);
            free(VAR1);
        }
    }
}
