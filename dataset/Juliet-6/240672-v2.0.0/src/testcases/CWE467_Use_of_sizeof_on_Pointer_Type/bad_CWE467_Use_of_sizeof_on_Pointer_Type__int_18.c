void FUN0()
{
    goto sink;
sink:
    {
        int * VAR0 = NULL;
<START>
        VAR0 = (int *)malloc(sizeof(VAR0));
<END>
        if (VAR0 == NULL) {exit(-1);}
        *VAR0 = 5;
        printIntLine(*VAR0);
        free(VAR0);
    }
}
