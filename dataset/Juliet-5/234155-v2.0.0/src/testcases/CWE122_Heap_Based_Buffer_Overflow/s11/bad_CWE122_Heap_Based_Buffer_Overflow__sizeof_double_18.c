void FUN0()
{
    double * data;
    data = NULL;
    goto source;
source:
    data = (double *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
