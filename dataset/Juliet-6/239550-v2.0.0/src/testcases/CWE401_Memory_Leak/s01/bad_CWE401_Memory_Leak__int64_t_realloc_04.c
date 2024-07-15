static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(STATIC_CONST_TRUE)
    {
<START>
<END>
        ; 
    }
}
