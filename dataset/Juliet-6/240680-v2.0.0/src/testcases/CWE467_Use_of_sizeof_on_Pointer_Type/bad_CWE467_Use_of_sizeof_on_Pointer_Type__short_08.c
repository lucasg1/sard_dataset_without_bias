static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN0())
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
}
