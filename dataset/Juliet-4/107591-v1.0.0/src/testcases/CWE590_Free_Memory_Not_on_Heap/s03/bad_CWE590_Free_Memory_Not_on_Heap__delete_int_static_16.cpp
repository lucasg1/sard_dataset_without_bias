namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    while(1)
    {
        {
            static int dataBuffer;
            dataBuffer = 5;
            data = &dataBuffer;
        }
        break;
    }
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
