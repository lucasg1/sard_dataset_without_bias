static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    double * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
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
