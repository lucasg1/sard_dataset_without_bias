namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    {
        char * data = dataRef;
<START>
<END>
        ; 
    }
}
} 
