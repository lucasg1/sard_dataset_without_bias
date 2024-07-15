static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(STATIC_CONST_FIVE==5)
    {
        free(data);
    }
}
