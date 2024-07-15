namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    FUN0(data);
}
} 
