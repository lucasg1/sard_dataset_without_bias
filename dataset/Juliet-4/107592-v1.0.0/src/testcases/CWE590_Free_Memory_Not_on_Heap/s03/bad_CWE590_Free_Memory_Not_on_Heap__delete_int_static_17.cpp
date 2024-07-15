namespace NAMESPACE0
{
void FUN0()
{
    int i;
    int * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        {
            static int dataBuffer;
            dataBuffer = 5;
            data = &dataBuffer;
        }
    }
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
