void FUN0()
{
    double * data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        ; 
    }
    if(globalReturnsTrueOrFalse())
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
        printDoubleLine(*data);
    }
    else
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
        printDoubleLine(*data);
    }
}
void FUN1()
{
    double * data;
    if(globalReturnsTrueOrFalse())
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
    }
    else
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
    }
    if(globalReturnsTrueOrFalse())
    {
        printDoubleLine(*data);
    }
    else
    {
        printDoubleLine(*data);
    }
}
