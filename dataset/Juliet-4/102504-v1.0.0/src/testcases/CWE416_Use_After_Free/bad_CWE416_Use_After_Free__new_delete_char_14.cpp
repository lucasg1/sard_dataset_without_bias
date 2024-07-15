namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(globalFive==5)
    {
<START>
        printHexCharLine(*data);
<END>
    }
}
} 
