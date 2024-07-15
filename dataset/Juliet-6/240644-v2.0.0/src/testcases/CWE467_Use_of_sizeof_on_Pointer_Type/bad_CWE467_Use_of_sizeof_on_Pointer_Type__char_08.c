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
}
