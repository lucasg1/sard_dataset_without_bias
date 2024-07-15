namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * &dataRef = data;
    int64_t * VAR1 = (int64_t *)ALLOCA(50*sizeof(int64_t));
    int64_t * VAR2 = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data = VAR1;
    {
        int64_t * data = dataRef;
        {
            int64_t source[100] = {0}; 
<START>
            memmove(data, source, 100*sizeof(int64_t));
<END>
            printLongLongLine(data[0]);
        }
    }
}
} 
