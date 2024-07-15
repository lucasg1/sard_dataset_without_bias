namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new int64_t[50];
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
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
