namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * &dataRef = data;
    int64_t VAR1[50];
    int64_t VAR2[100];
    data = VAR2;
    {
        int64_t * data = dataRef;
        {
            int64_t source[100] = {0}; 
            memcpy(data, source, 100*sizeof(int64_t));
            printLongLongLine(data[0]);
        }
    }
}
} 
