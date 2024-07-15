void FUN0()
{
    double * data;
    double * *dataPtr1 = &data;
    double * *dataPtr2 = &data;
    data = NULL;
    {
        double * data = *dataPtr1;
        data = (double *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        *data = 1.7E300;
        *dataPtr1 = data;
    }
    {
        double * data = *dataPtr2;
<START>
        printDoubleLine(*data);
<END>
        free(data);
    }
}
