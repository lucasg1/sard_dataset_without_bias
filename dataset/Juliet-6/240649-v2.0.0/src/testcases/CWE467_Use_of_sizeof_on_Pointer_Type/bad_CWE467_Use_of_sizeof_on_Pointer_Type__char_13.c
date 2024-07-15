void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
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
