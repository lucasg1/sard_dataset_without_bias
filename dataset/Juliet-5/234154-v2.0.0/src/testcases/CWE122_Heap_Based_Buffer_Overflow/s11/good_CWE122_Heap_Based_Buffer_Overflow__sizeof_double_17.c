void FUN0()
{
    int h;
    double * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (double *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
    }
    printDoubleLine(*data);
    free(data);
}
