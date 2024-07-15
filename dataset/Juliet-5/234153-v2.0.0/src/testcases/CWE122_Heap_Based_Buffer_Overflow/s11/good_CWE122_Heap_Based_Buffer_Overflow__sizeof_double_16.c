void FUN0()
{
    double * data;
    data = NULL;
    while(1)
    {
        data = (double *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
        break;
    }
    printDoubleLine(*data);
    free(data);
}
