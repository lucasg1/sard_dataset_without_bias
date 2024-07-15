namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        break;
    }
    while(1)
    {
<START>
        delete [] data;
<END>
        break;
    }
}
} 
