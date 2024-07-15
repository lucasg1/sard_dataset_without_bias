static int VAR0 = 0;
static double * FUN0(double * data)
{
    if(VAR0)
    {
        data = (double *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
    }
    return data;
}
void FUN1()
{
    double * data;
    data = NULL;
    VAR0 = 1; 
    data = FUN0(data);
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
