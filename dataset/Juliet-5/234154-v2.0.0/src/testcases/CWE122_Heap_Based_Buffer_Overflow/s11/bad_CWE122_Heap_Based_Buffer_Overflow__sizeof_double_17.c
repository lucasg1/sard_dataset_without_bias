void FUN0()
{
    int i;
    double * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (double *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
    }
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
