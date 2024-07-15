namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
<START>
    delete data;
<END>
}
} 
