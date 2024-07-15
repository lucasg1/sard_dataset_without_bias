void FUN0()
{
    double * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (double *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
    }
    else
    {
        data = (double *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
    }
    printDoubleLine(*data);
    free(data);
}
