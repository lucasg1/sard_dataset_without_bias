namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    while(1)
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
        break;
    }
    while(1)
    {
<START>
        printIntLine(data[0]);
<END>
        break;
    }
}
} 
