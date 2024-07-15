namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL;
    data = new int64_t;
    delete data;
    {
        int64_t * data = dataRef;
<START>
        delete data;
<END>
    }
}
} 
