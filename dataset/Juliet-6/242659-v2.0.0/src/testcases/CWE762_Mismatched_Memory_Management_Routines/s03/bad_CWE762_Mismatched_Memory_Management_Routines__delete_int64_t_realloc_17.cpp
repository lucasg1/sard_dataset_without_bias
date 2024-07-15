namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    int64_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = NULL;
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    for(j = 0; j < 1; j++)
    {
<START>
        delete data;
<END>
    }
}
} 
