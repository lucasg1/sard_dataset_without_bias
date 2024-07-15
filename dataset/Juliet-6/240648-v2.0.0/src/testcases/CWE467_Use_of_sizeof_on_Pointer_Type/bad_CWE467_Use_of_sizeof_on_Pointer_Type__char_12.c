void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char * VAR0 = NULL;
<START>
            VAR0 = (char *)malloc(sizeof(VAR0));
<END>
            if (VAR0 == NULL) {exit(-1);}
            *VAR0 = 'B';
            printHexCharLine(*VAR0);
            free(VAR0);
        }
    }
    else
    {
        {
            char * VAR1 = NULL;
            VAR1 = (char *)malloc(sizeof(*VAR1));
            if (VAR1 == NULL) {exit(-1);}
            *VAR1 = 'G';
            printHexCharLine(*VAR1);
            free(VAR1);
        }
    }
}
