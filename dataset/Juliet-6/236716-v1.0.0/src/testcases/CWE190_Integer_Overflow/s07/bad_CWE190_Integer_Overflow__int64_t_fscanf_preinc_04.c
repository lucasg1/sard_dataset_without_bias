static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int64_t data;
    data = 0LL;
    if(STATIC_CONST_TRUE)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(STATIC_CONST_TRUE)
    {
        {
<START>
            ++data;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
