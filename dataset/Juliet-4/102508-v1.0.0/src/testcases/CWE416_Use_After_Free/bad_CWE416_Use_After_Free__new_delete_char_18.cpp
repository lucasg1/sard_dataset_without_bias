namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char;
    *data = 'A';
    delete data;
    goto sink;
sink:
<START>
    printHexCharLine(*data);
<END>
}
} 
