namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    long * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    for(j = 0; j < 1; j++)
    {
<START>
        printLongLine(*data);
<END>
    }
}
} 
