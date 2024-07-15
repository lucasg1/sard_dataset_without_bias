namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL; 
    {
        static char dataBuffer;
        dataBuffer = 'A';
        data = &dataBuffer;
    }
    {
        char * data = dataRef;
        printHexCharLine(*data);
<START>
        delete data;
<END>
    }
}
} 
