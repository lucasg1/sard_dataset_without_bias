namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char;
    *data = 'A';
    delete data;
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
<START>
    printHexCharLine(*data);
<END>
}
} 
