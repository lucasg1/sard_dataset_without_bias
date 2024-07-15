namespace NAMESPACE0
{
static int64_t * FUN0(int64_t * data)
{
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete [] data;
<END>
}
} 
