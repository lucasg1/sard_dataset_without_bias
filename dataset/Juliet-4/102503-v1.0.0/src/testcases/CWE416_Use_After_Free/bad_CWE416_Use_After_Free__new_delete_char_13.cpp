namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        printHexCharLine(*data);
<END>
    }
}
} 
