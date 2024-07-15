void FUN0()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
