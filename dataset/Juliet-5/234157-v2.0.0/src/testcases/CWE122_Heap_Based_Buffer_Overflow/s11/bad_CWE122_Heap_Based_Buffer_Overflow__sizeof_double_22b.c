int VAR0 = 0;
double * FUN0(double * data);
void FUN1()
{
    double * data;
    data = NULL;
    VAR0 = 1; 
    data = FUN0(data);
    printDoubleLine(*data);
    free(data);
}
extern int VAR0;
double * FUN0(double * data)
{
    if(VAR0)
    {
        data = (double *)malloc(sizeof(data));
<START>
        if (data == NULL) {exit(-1);}
<END>
        *data = 1.7E300;
    }
    return data;
}
