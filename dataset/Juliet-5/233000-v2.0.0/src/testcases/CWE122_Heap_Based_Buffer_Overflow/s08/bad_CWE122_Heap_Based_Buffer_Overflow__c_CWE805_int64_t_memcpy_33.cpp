namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL;
    data = (int64_t *)malloc(50*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    {
        int64_t * data = dataRef;
        {
            int64_t source[100] = {0}; 
<START>
            memcpy(data, source, 100*sizeof(int64_t));
<END>
            printLongLongLine(data[0]);
            free(data);
        }
    }
}
} 
