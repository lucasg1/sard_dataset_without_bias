namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = new int[10];
    if(1)
    {
        ; 
    }
    if(1)
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
