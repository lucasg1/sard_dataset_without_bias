void FUN0()
{
    double * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
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
void FUN1()
{
    double * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (double *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
    }
    printDoubleLine(*data);
    free(data);
}
