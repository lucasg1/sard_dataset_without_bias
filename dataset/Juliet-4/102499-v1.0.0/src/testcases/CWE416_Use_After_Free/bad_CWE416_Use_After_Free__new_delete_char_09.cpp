namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        printHexCharLine(*data);
<END>
    }
}
} 
