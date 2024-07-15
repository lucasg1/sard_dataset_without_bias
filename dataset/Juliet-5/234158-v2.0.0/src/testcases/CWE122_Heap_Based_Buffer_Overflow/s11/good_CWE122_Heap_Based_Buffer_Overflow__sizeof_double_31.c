void FUN0()
{
    double * data;
    data = NULL;
    data = (double *)malloc(sizeof(*data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
    {
        double * dataCopy = data;
        double * data = dataCopy;
        printDoubleLine(*data);
        free(data);
    }
}
