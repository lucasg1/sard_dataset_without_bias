namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    data = NULL;
    {
        int64_t * data = *dataPtr1;
        data = NULL;
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
<START>
        delete data;
<END>
    }
}
} 
