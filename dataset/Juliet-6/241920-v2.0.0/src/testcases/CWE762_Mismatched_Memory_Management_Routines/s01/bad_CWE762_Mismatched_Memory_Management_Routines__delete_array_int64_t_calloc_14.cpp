namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(globalFive==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 
