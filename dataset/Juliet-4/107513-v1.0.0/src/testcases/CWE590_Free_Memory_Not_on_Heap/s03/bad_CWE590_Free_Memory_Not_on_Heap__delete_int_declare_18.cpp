namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    goto source;
source:
    {
        int dataBuffer;
        dataBuffer = 5;
        data = &dataBuffer;
    }
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
