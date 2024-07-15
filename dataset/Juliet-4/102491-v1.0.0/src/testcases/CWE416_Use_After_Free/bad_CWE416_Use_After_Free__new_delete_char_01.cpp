namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    delete data;
<START>
    printHexCharLine(*data);
<END>
}
} 
