static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (int *)malloc(50*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        free(data);
    }
}
