void FUN0()
{
    int i,k;
    double * data;
    for(i = 0; i < 1; i++)
    {
        ; 
    }
    for(k = 0; k < 1; k++)
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
        printDoubleLine(*data);
    }
}
void FUN1()
{
    int h,j;
    double * data;
    for(h = 0; h < 1; h++)
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
    }
    for(j = 0; j < 1; j++)
    {
        printDoubleLine(*data);
    }
}
