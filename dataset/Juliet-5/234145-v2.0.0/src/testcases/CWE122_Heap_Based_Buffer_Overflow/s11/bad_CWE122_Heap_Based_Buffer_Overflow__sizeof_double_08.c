static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    double * data;
    data = NULL;
    if(FUN0())
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
