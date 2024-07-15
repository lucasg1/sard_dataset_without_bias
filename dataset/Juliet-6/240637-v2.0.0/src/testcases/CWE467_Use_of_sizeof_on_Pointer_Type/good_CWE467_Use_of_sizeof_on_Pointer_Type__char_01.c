void FUN0()
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
