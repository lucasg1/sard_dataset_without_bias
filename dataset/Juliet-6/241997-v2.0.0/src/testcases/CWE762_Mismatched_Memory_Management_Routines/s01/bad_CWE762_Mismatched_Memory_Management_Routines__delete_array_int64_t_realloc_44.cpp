namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
<START>
    delete [] data;
<END>
}
void FUN1()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN0;
    data = NULL;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    funcPtr(data);
}
} 
