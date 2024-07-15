static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        printLongLine(data[0]);
<END>
    }
}
