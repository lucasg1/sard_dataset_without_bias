namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char[100];
    delete [] data;
<START>
    delete [] data;
<END>
}
} 
