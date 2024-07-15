void FUN0()
{
    switch(6)
    {
    case 6:
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
    default:
        printLine("Benign, fixed string");
        break;
    }
}
