void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
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
    else
    {
        {
            int * VAR1 = NULL;
            VAR1 = (int *)malloc(sizeof(*VAR1));
            if (VAR1 == NULL) {exit(-1);}
            *VAR1 = 6;
            printIntLine(*VAR1);
            free(VAR1);
        }
    }
}
