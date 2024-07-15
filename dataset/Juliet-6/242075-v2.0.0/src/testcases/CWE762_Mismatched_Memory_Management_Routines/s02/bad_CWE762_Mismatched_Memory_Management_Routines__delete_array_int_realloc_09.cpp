namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = NULL;
        data = (int *)realloc(data, 100*sizeof(int));
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
