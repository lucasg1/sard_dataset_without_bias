namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    if(globalFive==5)
    {
        {
            static char dataBuffer;
            dataBuffer = 'A';
            data = &dataBuffer;
        }
    }
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
} 
