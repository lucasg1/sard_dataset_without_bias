namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL; 
    data = (int64_t *)malloc(1*sizeof(int64_t));
    {
        int64_t * data = dataRef;
        if (data != NULL)
        {
            data[0] = 5LL;
            printLongLongLine(data[0]);
            free(data);
        }
    }
}
} 
