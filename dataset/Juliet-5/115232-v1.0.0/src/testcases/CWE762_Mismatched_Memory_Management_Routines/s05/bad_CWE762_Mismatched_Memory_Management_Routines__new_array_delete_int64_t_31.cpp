namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
<START>
        delete data;
<END>
    }
}
} 
