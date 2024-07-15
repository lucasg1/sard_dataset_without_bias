namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        delete [] data;
<END>
    }
}
} 
