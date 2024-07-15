void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
