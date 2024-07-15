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
    data = NULL;
    data = (int64_t *)calloc(100, sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
} 
