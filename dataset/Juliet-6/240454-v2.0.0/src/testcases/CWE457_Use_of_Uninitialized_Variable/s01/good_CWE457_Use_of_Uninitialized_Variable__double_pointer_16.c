void FUN0()
{
    double * data;
    while(1)
    {
        ; 
        break;
    }
    while(1)
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
        printDoubleLine(*data);
        break;
    }
}
void FUN1()
{
    double * data;
    while(1)
    {
        data = (double *)malloc(sizeof(double));
        if (data == NULL) {exit(-1);}
        *data = 5.0;
        break;
    }
    while(1)
    {
        printDoubleLine(*data);
        break;
    }
}
