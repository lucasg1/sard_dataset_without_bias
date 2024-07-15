namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL; 
    data = (int64_t *)calloc(1, sizeof(int64_t));
    {
        int64_t * data = dataRef;
<START>
        data[0] = 5LL;
<END>
        printLongLongLine(data[0]);
        free(data);
    }
}
} 
