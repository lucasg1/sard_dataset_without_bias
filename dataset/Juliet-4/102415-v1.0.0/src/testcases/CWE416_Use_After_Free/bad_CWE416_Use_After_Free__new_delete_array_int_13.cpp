namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        printIntLine(data[0]);
<END>
    }
}
} 
