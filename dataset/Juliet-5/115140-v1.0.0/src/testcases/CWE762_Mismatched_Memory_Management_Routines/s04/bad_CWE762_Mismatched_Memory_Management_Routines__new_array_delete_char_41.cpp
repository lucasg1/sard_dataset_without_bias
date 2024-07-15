namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
    delete data;
<END>
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[100];
    FUN0(data);
}
} 
