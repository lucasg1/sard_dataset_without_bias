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
        data = new int64_t[50];
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        {
            int64_t source[100] = {0}; 
<START>
            memmove(data, source, 100*sizeof(int64_t));
<END>
            printLongLongLine(data[0]);
            delete [] data;
        }
    }
}
} 
