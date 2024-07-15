static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int64_t data;
    data = 0LL;
    if(STATIC_CONST_FIVE==5)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(STATIC_CONST_FIVE==5)
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
