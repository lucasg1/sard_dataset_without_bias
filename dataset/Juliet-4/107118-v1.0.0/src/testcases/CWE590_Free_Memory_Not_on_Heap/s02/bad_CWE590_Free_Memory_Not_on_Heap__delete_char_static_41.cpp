namespace NAMESPACE0
{
void FUN0(char * data)
{
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
void FUN1()
{
    char * data;
    data = NULL; 
    {
        static char dataBuffer;
        dataBuffer = 'A';
        data = &dataBuffer;
    }
    FUN0(data);
}
} 
