static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    double * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
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
