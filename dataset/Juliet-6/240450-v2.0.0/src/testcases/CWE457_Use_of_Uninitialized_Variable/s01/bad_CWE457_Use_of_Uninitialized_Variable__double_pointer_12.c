void FUN0()
{
    double * data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printDoubleLine(*data);
<END>
    }
    else
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
        printDoubleLine(*data);
    }
}
