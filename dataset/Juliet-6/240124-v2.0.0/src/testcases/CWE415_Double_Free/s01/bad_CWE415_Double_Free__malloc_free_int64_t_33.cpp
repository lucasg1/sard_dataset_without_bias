namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    free(data);
    {
        int64_t * data = dataRef;
<START>
        free(data);
<END>
    }
}
} 
