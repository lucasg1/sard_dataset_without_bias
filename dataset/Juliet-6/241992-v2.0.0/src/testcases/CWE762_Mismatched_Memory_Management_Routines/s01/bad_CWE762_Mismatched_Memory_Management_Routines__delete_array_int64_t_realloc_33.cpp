namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    {
        int64_t * data = dataRef;
<START>
        delete [] data;
<END>
    }
}
} 
