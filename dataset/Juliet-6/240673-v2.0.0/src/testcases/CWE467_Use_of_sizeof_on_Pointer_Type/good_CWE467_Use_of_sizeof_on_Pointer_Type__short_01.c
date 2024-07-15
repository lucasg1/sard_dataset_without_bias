void FUN0()
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
