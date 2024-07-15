namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = new int[10];
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = i;
            }
        }
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
<START>
                printIntLine(data[i]);
<END>
            }
        }
        delete [] data;
    }
}
} 
