void FUN0()
{
    while(1)
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
        break;
    }
}
